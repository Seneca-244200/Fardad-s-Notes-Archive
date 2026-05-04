# Workshop: Function Templates and Specialization

## Learning Outcomes

Upon successful completion of this workshop, you will be able to:

* implement **function templates**
* implement a **function template specialization**
* apply templates to work with arrays of different types
* understand the difference between:

  * a **regular module** (`.h` / `.cpp`)
  * a **template module** (header-only)

---

## Overview

In this workshop, you will work with two modules:

### 1) `Name` Module (Provided)

This is a regular class module that follows the standard structure:

* declarations in a header file (`.h`)
* implementations in a source file (`.cpp`)

### 2) `search` Module (To Be Created)

This module will contain **function templates**.

Since templates must be visible at the point of use, all implementations must be placed in:

* `search.h`

No `.cpp` file should be created for this module.

---

## Project Structure

Your project must contain the following files:

```
Name.h        (provided)
Name.cpp      (provided)
search.h      (create this file)
main.cpp      (provided)
tester.cpp    (provided)
```

---

## Restrictions

The following rules apply:

* Do **not** use STL containers
* Do **not** use `std::string`
* Do **not** modify the `Name` module
* Do **not** create a `search.cpp`
* All template implementations must remain in `search.h`

---

## The `Name` Module

This module is fully implemented and provided to you.

You must **not modify it**.

### `Name.h`

```cpp
#ifndef SENECA_NAME_H
#define SENECA_NAME_H

#include <iostream>

namespace seneca {

   class Name {
      char m_value[41]{};
   public:
      Name(const char* value = "");

      bool equal(const Name& other) const;

      const char* get() const;
   };

   std::ostream& operator<<(std::ostream& ostr, const Name& N);

}

#endif
```

---

### `Name.cpp`

```cpp
#include "Name.h"
#include <cstring>

namespace seneca {

   Name::Name(const char* value) {
      std::strcpy(m_value, value);
   }

   bool Name::equal(const Name& other) const {
      return std::strcmp(m_value, other.m_value) == 0;
   }

   const char* Name::get() const {
      return m_value;
   }

   std::ostream& operator<<(std::ostream& ostr, const Name& N) {
      return ostr << N.get();
   }

}
```

---

## Your Task

Create a file called:

```
search.h
```

In this file, implement all required function templates and the specialization inside the `seneca` namespace.

You must design the function templates yourself based on the descriptions below.

---

## Required Functions

### 1) `isEqual`

Create a **function template** called `isEqual`.

* returns a `bool`
* receives two values of the same type by **const reference**
* returns `true` if the values are equal, `false` otherwise
* the generic version must use the `==` operator

---

### 2) Specialized `isEqual` for `Name`

Create a **function template specialization** of `isEqual` for the `Name` type.

* returns a `bool`
* receives two `Name` objects by **const reference**
* must compare the objects using the `equal` member function

---

### 3) `findIndex`

Create a **function template** called `findIndex`.

* returns an `int`
* receives:

  * a pointer to a constant array of elements
  * an integer size
  * a constant reference to a value to search for
* searches the array from left to right
* returns the index of the **first matching element**
* returns `-1` if not found
* must use `isEqual` for comparisons

---

### 4) `countOccurrences`

Create a **function template** called `countOccurrences`.

* returns an `int`
* receives:

  * a pointer to a constant array of elements
  * an integer size
  * a constant reference to a value to search for
* returns how many times the value appears in the array
* must use `isEqual` for comparisons

---

Yes — that is a great improvement 👍
Much cleaner and more in line with how you’ve been teaching stream usage.

Here is the **updated student-facing description for `printCSV` only**:

---

### 5) `printCSV`

Create a **function template** called `printCSV`.

* returns `void`
* receives:

  * a pointer to a constant array of elements
  * an integer size
  * a reference to an output stream (with a default value of std::cout)

### Behaviour

* prints all elements on one line in CSV format
* prints a newline at the end
* uses the provided output stream

### Example

```text
10,20,30
```

### Rules

* separate elements using commas
* do not print a trailing comma
* do not print extra spaces
* use the output stream parameter instead of directly using `cout`

### Notes
* the output stream parameter should have a default value of std::cout
* this allows the function to work with other output streams such as std::ostringstream
> std::ostringstream can capture output into a C++ string so we can compare it with the expected results
(this is a bit beyond OOP244… don’t worry about it for now 😄 but it makes my life much easier when writing the tester, so I’m using it anyway in tester.cpp)
### Example Usage

```cpp
printCSV(nums, 6);           // prints to cout
printCSV(nums, 6, os);       // prints to ostringstream os
```


## Provided Demo Program

Use the following program to test your implementation.

### `main.cpp`

```cpp
#include <iostream>
#include "search.h"

using namespace std;
using namespace seneca;

int main() {
   int nums[] = { 10, 20, 30, 20, 50, 20 };
   double prices[] = { 1.5, 2.5, 1.5, 3.0 };
   char letters[] = { 'A', 'B', 'C', 'B', 'D' };
   Name names[] = { "Ali", "Sara", "John", "Sara", "Mina" };

   cout << "Integers:" << endl;
   printCSV(nums, 6);
   cout << "Index of 20: " << findIndex(nums, 6, 20) << endl;
   cout << "Count of 20: " << countOccurrences(nums, 6, 20) << endl;
   cout << endl;

   cout << "Doubles:" << endl;
   printCSV(prices, 4);
   cout << "Index of 1.5: " << findIndex(prices, 4, 1.5) << endl;
   cout << "Count of 1.5: " << countOccurrences(prices, 4, 1.5) << endl;
   cout << endl;

   cout << "Characters:" << endl;
   printCSV(letters, 5);
   cout << "Index of B: " << findIndex(letters, 5, 'B') << endl;
   cout << "Count of B: " << countOccurrences(letters, 5, 'B') << endl;
   cout << endl;

   cout << "Names:" << endl;
   printCSV(names, 5);
   cout << "Index of Sara: " << findIndex(names, 5, Name("Sara")) << endl;
   cout << "Count of Sara: " << countOccurrences(names, 5, Name("Sara")) << endl;
   cout << "Index of Reza: " << findIndex(names, 5, Name("Reza")) << endl;

   return 0;
}
```

---

## Expected Output

```
Integers:
10,20,30,20,50,20
Index of 20: 1
Count of 20: 3

Doubles:
1.5,2.5,1.5,3
Index of 1.5: 0
Count of 1.5: 2

Characters:
A,B,C,B,D
Index of B: 1
Count of B: 2

Names:
Ali,Sara,John,Sara,Mina
Index of Sara: 1
Count of Sara: 2
Index of Reza: -1
```

---

## Detailed Tester

A more strict tester will also be used to validate your work.

### `tester.cpp`

This tester verifies:

* template correctness
* specialization correctness
* searching logic
* counting logic
* CSV formatting

(Use the tester provided by your professor or repository.)

---

## Submission

Submit:

```
Name.h  
Name.cpp
search.h
main.cpp
```
### Submission command on matrix
```bash
~fardad.soleimanloo/submit 244/labs/temp
```
---

## Final Notes

* The `Name` module demonstrates a **standard class implementation**
* The `search` module demonstrates a **template-based design**
* This difference is intentional and important

Ensure that:

* all templates are fully implemented in the header
* your code compiles and runs correctly with both `main.cpp` and the tester (used for submission)


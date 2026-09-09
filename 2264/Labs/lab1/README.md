# Lab 1 — Function Overloading and References

## Subject

OOP244 — Introduction to Object-Oriented Programming

## Topic

Function Overloading, References, Structs, and Modules

## Estimated Completion Time

35 to 40 minutes

---

## Learning Outcomes

After completing this lab, you should be able to:

* create a simple C++ module using a header file and an implementation file
* define and use a `struct`
* write function prototypes in a header file
* implement overloaded functions
* pass variables by reference
* use `const` references when a function should not modify the received value
* use a namespace to organize your code

---

# Lab Scenario — Time Values

In this lab, you will create a small module that works with time values.

A time value will be stored using a `struct` called `Time`.

Each `Time` object will store:

* hours
* minutes

For example, a `Time` object with:

```text
hours: 2
minutes: 30
```

represents:

```text
2 hours and 30 minutes
```

You will create several overloaded functions to set, add, and display time values.

---

# Files to Create

Create the following files:

```text
Time.h
Time.cpp
main.cpp
```

The `Time` module must be written inside the `seneca` namespace.

---

# Part 1 — The Header File

Create a file named:

```text
Time.h
```

Your header file must begin with the following header safeguards:

```cpp
#ifndef SENECA_TIME_H
#define SENECA_TIME_H
```

and must end with:

```cpp
#endif
```

Inside the header safeguards, create the `seneca` namespace.

Inside the `seneca` namespace, define the following structure:

```cpp
struct Time {
   int hours;
   int minutes;
};
```

Then add the function prototypes listed below.

---

## Function Prototypes

### The first `set` function

```cpp
void set(Time& time, int hours, int minutes);
```

This function receives:

* a `Time` object by reference
* an integer for hours
* an integer for minutes

It must set the `hours` and `minutes` members of the received `Time` object.

Because the `Time` object is passed by reference, the original object in `main()` must be changed.

---

### The second `set` function

```cpp
void set(Time& time, int totalMinutes);
```

This is an overloaded version of the `set` function.

This function receives:

* a `Time` object by reference
* the total number of minutes as an integer

It must convert the total number of minutes into hours and minutes.

For example:

```text
135 minutes
```

should become:

```text
2 hours and 15 minutes
```

Use integer division to find the number of hours.

Use the modulus operator `%` to find the remaining minutes.

---

### The first `add` function

```cpp
void add(Time& time, int minutes);
```

This function receives:

* a `Time` object by reference
* a number of minutes to add

It must add the received minutes to the current value of the `Time` object.

For example, if the time is:

```text
1 hour and 45 minutes
```

and you add:

```text
30 minutes
```

the result should become:

```text
2 hours and 15 minutes
```

To do this, first convert the current time into total minutes, then add the received minutes. After that, convert the new total back into hours and minutes.

You should reuse one of your `set` functions to avoid repeating the conversion logic.

---

### The second `add` function

```cpp
void add(Time& destination, const Time& source);
```

This is an overloaded version of the `add` function.

This function receives:

* a destination `Time` object by reference
* a source `Time` object by constant reference

It must add the value of `source` to `destination`.

The `destination` object must change.

The `source` object must not change.

For example:

```text
destination: 1 hour and 20 minutes
source:      2 hours and 15 minutes
```

After the function call:

```text
destination: 3 hours and 35 minutes
source:      2 hours and 15 minutes
```

You should reuse your other `add` function to avoid repeating the same logic.

---

### The first `display` function

```cpp
void display(const Time& time);
```

This function receives a `Time` object by constant reference.

It must display the time in this format:

```text
hours:minutes
```

For example:

```text
2:15
```

Do not print a newline inside this function.

No special formatting is required. For example, 2 hours and 5 minutes may be displayed as:

```text
2:5
```

---

### The second `display` function

```cpp
void display(const Time& time, const char* label);
```

This is an overloaded version of the `display` function.

This function receives:

* a `Time` object by constant reference
* a C-style string label

It must display the label, followed by a colon, a space, and then the time.

For example, if the label is `"Study"` and the time is 2 hours and 15 minutes, the output should be:

```text
Study: 2:15
```

You should reuse your other `display` function to avoid repeating the display logic.

---

# Part 2 — The Implementation File

Create a file named:

```text
Time.cpp
```

Include the required files:

```cpp
#include <iostream>
#include "Time.h"
```

You may use:

```cpp
using namespace std;
```

so you can write `cout` instead of `std::cout`.

All your function implementations must be written inside the `seneca` namespace block:

```cpp
namespace seneca {

   // Function implementations go here

}
```

Do not place your functions outside the namespace.

---

## Implementation Instructions

Implement all six functions declared in `Time.h`.

You must make sure that:

* the two `set` functions have the same name but different parameter lists
* the two `add` functions have the same name but different parameter lists
* the two `display` functions have the same name but different parameter lists
* functions that modify a `Time` object receive it by reference
* functions that only read a `Time` object receive it by constant reference
* repeated logic is avoided when possible by calling one function from another

---

# Part 3 — Tester Program

Create a file named:

```text
main.cpp
```

Use the following tester program:

```cpp
/* Citation and Sources...
-----------------------------------------------------------
Overloading Lab
Module: main
Filename: main.cpp
-----------------------------------------------------------
Author: Fardad Soleimanloo
Student number: N/A
Email: fardad.soleimanloo@senecacollege.ca
Subject: OOP244
-----------------------------------------------------------
Revision History
------- --------- ------------------------------------------
Version Date      Reason
V1.0              Initial Release
-----------------------------------------------------------
*/
#include <iostream>
#include "Time.h"

using namespace std;
using namespace seneca;

int main() {
   Time study;
   Time lecture;

   cout << "Setting study time using hours and minutes..." << endl;
   set(study, 1, 30);
   display(study, "Study");
   cout << endl;

   cout << endl;

   cout << "Setting lecture time using total minutes..." << endl;
   set(lecture, 80);
   display(lecture, "Lecture");
   cout << endl;

   cout << endl;

   cout << "Adding 45 minutes to study time..." << endl;
   add(study, 45);
   display(study, "Study");
   cout << endl;

   cout << endl;

   cout << "Adding lecture time to study time..." << endl;
   add(study, lecture);
   display(study, "Study");
   cout << endl;

   cout << endl;

   cout << "Lecture time should still be unchanged..." << endl;
   display(lecture, "Lecture");
   cout << endl;

   return 0;
}
```

---

# Expected Output

```text
Setting study time using hours and minutes...
Study: 1:30

Setting lecture time using total minutes...
Lecture: 1:20

Adding 45 minutes to study time...
Study: 2:15

Adding lecture time to study time...
Study: 3:35

Lecture time should still be unchanged...
Lecture: 1:20
```

---

# Important Rules

* Do not use classes.
* Do not use dynamic memory.
* Do not use `string`.
* Do not use arrays.
* Do not use formatting manipulators such as `setw` or `setfill`.
* Do not perform input validation.
* Do not change the tester program.
* Write your module code inside the `seneca` namespace.
* Use the exact function names and prototypes given in this lab.
* Submit all three files: `Time.h`, `Time.cpp`, and `main.cpp`.

---

# Submission Files

Submit:

```text
Time.h
Time.cpp
main.cpp
```

---

# Reminder

Function overloading means creating more than one function with the same name, as long as the parameter list is different.

In this lab, you are overloading:

```cpp
set(...)
add(...)
display(...)
```

The compiler decides which function to call based on the number and type of arguments used in the function call.

For example:

```cpp
set(study, 1, 30);
```

calls the `set` function that receives:

```cpp
Time&, int, int
```

but:

```cpp
set(lecture, 80);
```

calls the `set` function that receives:

```cpp
Time&, int
```

Also remember that a reference allows a function to work with the original variable. This is why changes made to a `Time&` parameter affect the object in `main()`.

# Lab: Interface, Abstract Base Class, and Concrete Class

## Objective

In this lab, you will practise:

* working with an **interface** that contains **two pure virtual functions**
* implementing a helper `operator<<` in a separate source file
* creating an **abstract base class** by implementing only **one** of the two pure virtual functions
* creating a **concrete derived class** by implementing the remaining pure virtual function
* testing polymorphism using **interface pointers**

This lab is designed to be completed in about **40 to 50 minutes**.

---

# Scenario

You are creating a very small machine hierarchy.

Every machine must be able to:

* display itself
* operate

A common interface is already provided.

You will create:

* an abstract base class called `Machine`
* a concrete derived class called `Printer`

The tester will store `Printer` objects in an array of `iMachine*` pointers and test them polymorphically.

---

# Provided Files

You are given:

* `iMachine.h`
* `main.cpp`

You must create and complete:

* `iMachine.cpp`
* `Machine.h`
* `Machine.cpp`
* `Printer.h`
* `Printer.cpp`

---

# Provided Interface

## `iMachine.h`

```cpp
#ifndef SENECA_IMACHINE_H
#define SENECA_IMACHINE_H

#include <iostream>

namespace seneca {

   class iMachine {
   public:
      virtual void display(std::ostream& ostr) const = 0;
      virtual void operate() const = 0;
      virtual ~iMachine() {
      }
   };

   std::ostream& operator<<(std::ostream& ostr, const iMachine& M);

}

#endif
```

---

# Task 1: Implement `operator<<` in `iMachine.cpp`

Create a source file called `iMachine.cpp`.

Implement this function:

```cpp
std::ostream& operator<<(std::ostream& ostr, const iMachine& M);
```

## What it should do

This function must call the object's `display` function and then return the stream.

### In other words

If this is written:

```cpp
cout << someMachine;
```

your operator should internally do this:

```cpp
someMachine.display(cout);
```

and then return `cout`.

---

# Task 2: Create the Abstract Base Class `Machine`

Create a class called `Machine` that publicly inherits from `iMachine`.

## Data Members

`Machine` should store:

* the machine name as a dynamically allocated C-string
* the power usage in watts

Use:

```cpp
char* m_name;
int m_power;
```

---

## Constructor

Provide a constructor with this prototype:

```cpp
Machine(const char* name = nullptr, int power = 0);
```

The constructor should:

* safely store the received name in dynamic memory
* store the power value

If the received name is `nullptr`, store an empty string instead.

---

## Destructor

Since `Machine` stores dynamic memory for the name, it must have a destructor.

Add a virtual destructor:

```cpp
virtual ~Machine();
```

The destructor must deallocate the dynamic memory used by `m_name`.

---

## Member Functions

Implement:

```cpp
void display(std::ostream& ostr) const;
```

Also provide this protected member function:

```cpp
const char* name() const;
```

This function returns the machine name so the derived class can use it.

---

## Important

Do **not** implement `operate()` in `Machine`.

That means `Machine` still has one pure virtual function not implemented, so it remains an **abstract class**.

That is required in this lab.

---

# Display Format for `Machine`

`display` must print exactly in this format:

```txt
Machine: LaserJet, Power: 500W
```

So if the machine name is `LaserJet` and the power is `500`, the output must be exactly:

```txt
Machine: LaserJet, Power: 500W
```

---

# Task 3: Create the Concrete Class `Printer`

Create a class called `Printer` that publicly inherits from `Machine`.

## Data Member

Add:

```cpp
int m_speed;
```

This represents printing speed in pages per minute.

---

## Constructor

Provide a constructor with this prototype:

```cpp
Printer(const char* name = nullptr, int power = 0, int speed = 0);
```

It should initialize the base class part with the name and power, and then store the speed.

---

## Member Function

Implement:

```cpp
void operate() const;
```

Since `Printer` implements the remaining pure virtual function, `Printer` becomes a **concrete class**.

---

# Output Format for `operate`

When `operate()` is called, it must print exactly this format:

```txt
Printing on LaserJet at 30 pages/min
```

So if the name is `LaserJet` and the speed is `30`, the output must be:

```txt
Printing on LaserJet at 30 pages/min
```

---

# File Requirements

## `iMachine.cpp`

Implement:

* `operator<<`

---

## `Machine.h`

Declare class `Machine` in namespace `seneca`.

Include:

* `<iostream>`
* `"iMachine.h"`

Declare:

* `char* m_name;`
* `int m_power;`
* constructor
* virtual destructor
* `display(std::ostream&) const`
* protected `name() const`

---

## `Machine.cpp`

Implement:

* constructor
* destructor
* `display(...)`
* `name()`

---

## `Printer.h`

Declare class `Printer` derived from `Machine`.

Include `"Machine.h"`.

Declare:

* `int m_speed;`
* constructor
* `operate() const`

---

## `Printer.cpp`

Implement:

* constructor
* `operate()`

---

# Tester Program

## `main.cpp`

```cpp
#include <iostream>
#include "Printer.h"

using namespace std;
using namespace seneca;

int main() {
   iMachine* machines[3];

   machines[0] = new Printer("LaserJet", 500, 30);
   machines[1] = new Printer("DeskJet", 350, 20);
   machines[2] = new Printer("OfficePro", 600, 40);

   cout << "Display Test" << endl;
   for (int i = 0; i < 3; i++) {
      cout << *machines[i] << endl;
   }

   cout << endl;
   cout << "Operation Test" << endl;
   for (int i = 0; i < 3; i++) {
      machines[i]->operate();
   }

   for (int i = 0; i < 3; i++) {
      delete machines[i];
   }

   return 0;
}
```

---

# Expected Output

```txt
Display Test
Machine: LaserJet, Power: 500W
Machine: DeskJet, Power: 350W
Machine: OfficePro, Power: 600W

Operation Test
Printing on LaserJet at 30 pages/min
Printing on DeskJet at 20 pages/min
Printing on OfficePro at 40 pages/min
```

---

# Suggested Implementation Notes for Students

## For storing the name

Use `<cstring>` header
* `strlen`
* `strcpy`

So in the constructor, allocate enough memory for the name and copy it.

If the incoming name is null, store an empty C-string.

---

## For the destructor

Since the name is dynamically allocated, it must be released in the destructor using:

```cpp
delete[] m_name;
```

---

## For `Printer::operate()`

Use the protected `name()` function inherited from `Machine` to access the machine name.

---

# Step-by-Step Guide

## Step 1

Create `iMachine.cpp` and implement `operator<<`.

It must call `display(...)` and return the stream.

---

## Step 2

Create `Machine.h` and `Machine.cpp`.

This class must:

* inherit from `iMachine`
* store the name and power
* implement `display(...)`
* remain abstract by not implementing `operate()`

---

## Step 3

Create `Printer.h` and `Printer.cpp`.

This class must:

* inherit from `Machine`
* add speed
* implement `operate()`

---

## Step 4

Compile and run with the provided `main.cpp`.

Make sure the output matches exactly.

---

# Design Summary

The inheritance chain is:

```txt
iMachine -> Machine -> Printer
```

## Meaning

* `iMachine` is an interface
* `Machine` is abstract because it implements only one pure virtual function
* `Printer` is concrete because it implements the remaining pure virtual function

---

# Hints

* If a class does not implement all inherited pure virtual functions, it remains abstract.
* `Machine` must not implement `operate()`.
* `Printer` must implement `operate()`.
* `operator<<` must call `display(...)`.
* Since C-strings are used, remember to allocate and deallocate memory correctly.

---

# Submission

Submit:

* `iMachine.cpp`
* `Machine.h`
* `Machine.cpp`
* `Printer.h`
* `Printer.cpp`
* `main.cpp`

## Submission Command:
```bash
~fardad.soleimanloo/submit 244/labs/vir_???    
```  
??? replaced by naa or nbb, based on your section
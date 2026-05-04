# OOP244 Lab: Derived Classes and Functions in a Hierarchy

## Vehicle and Airplane

---
> ⚠️ **Before You Begin**
> You **must read and understand** the [Code Submission Regulations and Policies](../README.md) before starting this or any other delivarable code. This document outlines important rules about academic integrity, submission procedures, and expectations.
> These policies apply to **all deliverable code** in OOP244. If you have already read it once, please ensure you continue to follow its guidelines throughout the course.
---


## Learning Outcomes

In this lab, you will practise inheritance and functions in a class hierarchy by creating a derived class from a fully implemented base class.

By the end of this lab, you should be able to:

* derive a class publicly from a base class
* use an inherited member function without overriding it
* override a base class member function and completely replace its behaviour
* override a base class member function and extend its behaviour by calling the base class version
* add a new feature to a derived class that does not exist in the base class
  
---

## Lab Description

You are given a fully implemented class named `Vehicle`.

The `Vehicle` class stores basic information about a vehicle:

* licence plate
* speed

Your task is to create a derived class named `Airplane` that adds:

* altitude

The goal of this lab is to practise how member functions behave in a hierarchy.

Your `Airplane` class must demonstrate all three of the following cases:

* using a base class function **without overriding it**
* overriding a base class function **without using the base version**
* overriding a base class function **by reusing the base version**

In addition, your `Airplane` class must have one new behaviour that does not exist in `Vehicle`.

---

## Provided Files

You are given the following files:

* `Vehicle.h`
* `Vehicle.cpp`
* `main.cpp`

The `Vehicle` class is fully implemented for you.

---

## Files You Must Create

You must create the following files:

* `Airplane.h`
* `Airplane.cpp`

---

## The Provided Base Class: `Vehicle`

The base class stores:

* a plate number
* a speed

The provided class uses:

* no dynamic memory allocation
* no `string` class
* only material already covered before this topic

### `Vehicle` Data Members

The provided class contains the following data members:

```cpp
char m_plate[9];
int m_speed;
```

### `Vehicle` Member Functions

The following member functions are already implemented and provided to you:

* default constructor
* 2-argument constructor
* `void setPlate(const char* plate);`
* `void setSpeed(int speed);`
* `const char* plate() const;`
* `int speed() const;`
* `void accelerate(int value);`
* `void move() const;`
* `void display(std::ostream& os) const;`

---

## Your Task: Create the `Airplane` Class

Create a class named `Airplane` that is **publicly derived** from `Vehicle`.

Your class must add one new data member:

* altitude

You must decide on the class declaration and implement the class in your own `Airplane.h` and `Airplane.cpp` files.

---

## Requirements

### 1. Add a New Data Member

Your `Airplane` class must store altitude as an integer value.

Negative altitude is not valid. If a negative altitude is received, store `0` instead.

---

### 2. Constructors

Your `Airplane` class must have:

* a default constructor
* a constructor that receives:

  * plate
  * speed
  * altitude

The constructor that receives arguments must initialize the `Vehicle` portion of the object using the base class constructor.

---

### 3. Altitude Functions

Your `Airplane` class must provide:

* a mutator that sets the altitude
* an accessor that returns the altitude

If a negative value is received by the mutator, the altitude must become `0`.

---

### 4. Add an Airplane-Specific Feature

Your `Airplane` class must have a new member function named:

```cpp
void climb(int value);
```

This function changes the altitude by the given value.

* a positive value increases altitude
* a negative value decreases altitude
* altitude must never become negative
* if the result would become negative, store `0`

Examples:

* if altitude is `30000` and `climb(2000)` is called, the new altitude becomes `32000`
* if altitude is `32000` and `climb(-40000)` is called, the new altitude becomes `0`

This function does not exist in `Vehicle`, so it is a feature added only to the derived class.

---

### 5. Use a Base Class Function Without Overriding It

Do **not** override the following function:

```cpp
void accelerate(int value);
```

Your `Airplane` objects must use this inherited function exactly as provided by the `Vehicle` class.

This demonstrates using a base class function without overriding it.

---

### 6. Override a Base Class Function Without Using the Base Version

Override the `move()` function in `Airplane`.

The provided `Vehicle::move()` describes movement on the ground.

Your `Airplane::move()` must describe flying.

Do **not** call `Vehicle::move()` inside `Airplane::move()`.

Your overridden version must print exactly in the following format:

```text
Airplane <plate> is flying at <altitude> feet.
```

For example:

```text
Airplane AC901 is flying at 30000 feet.
```

This demonstrates overriding a base class function and completely replacing its behaviour.

---

### 7. Override a Base Class Function by Reusing the Base Version

Override the `display(std::ostream&) const` function in `Airplane`.

Inside your `Airplane::display()` function, you must first call the base class version:

```cpp
Vehicle::display(os);
```

Then append the altitude information in the following format:

```text
 | Altitude: <altitude>
```

For example, if the vehicle portion prints:

```text
Vehicle | Plate: AC901 | Speed: 650
```

then the airplane version must print:

```text
Vehicle | Plate: AC901 | Speed: 650 | Altitude: 30000
```

This demonstrates extending a base class function by reusing the base version.

---

## Expected Behaviour Summary

Your `Airplane` class must demonstrate the following four cases:

### Inherited as-is

Use `accelerate(int)` from `Vehicle` without overriding it.

### Fully replaced

Override `move()` and do not call `Vehicle::move()`.

### Extended

Override `display(std::ostream&) const` and call `Vehicle::display(os)` before adding the altitude.

### New derived-class behaviour

Implement `climb(int)` as an `Airplane`-only feature.

---

## Program Behaviour

The provided tester program uses your `Airplane` class and expects the following behaviour.

### Default Values

A default-constructed `Airplane` should behave as follows:

* plate should come from the `Vehicle` default constructor
* speed should come from the `Vehicle` default constructor
* altitude should be `0`

### Altitude Validation

Any negative altitude must be stored as `0`.

### Climbing

Calling `climb(int)` changes the altitude:

* positive values increase altitude
* negative values decrease altitude
* altitude never drops below `0`

### Movement

Calling `move()` on an `Airplane` object must print:

```text
Airplane <plate> is flying at <altitude> feet.
```

### Display

Calling `display(cout)` on an `Airplane` object must print:

```text
Vehicle | Plate: <plate> | Speed: <speed> | Altitude: <altitude>
```

---

## Example Output

If your class is implemented correctly, the provided `main.cpp` will produce output similar to the following:

```text
---- Airplane objects after construction ----
Vehicle | Plate: NO-PLATE | Speed: 0 | Altitude: 0
Vehicle | Plate: AC901 | Speed: 650 | Altitude: 30000
Vehicle | Plate: ZX777 | Speed: 120 | Altitude: 0

---- Using inherited base class function accelerate ----
Vehicle | Plate: AC901 | Speed: 700 | Altitude: 30000
Vehicle | Plate: AC901 | Speed: 0 | Altitude: 30000

---- Overridden move() without using Vehicle::move() ----
Airplane NO-PLATE is flying at 0 feet.
Airplane AC901 is flying at 30000 feet.
Airplane ZX777 is flying at 0 feet.

---- Overridden display() using Vehicle::display() ----
Vehicle | Plate: NO-PLATE | Speed: 0 | Altitude: 0
Vehicle | Plate: AC901 | Speed: 0 | Altitude: 30000
Vehicle | Plate: ZX777 | Speed: 120 | Altitude: 0
```

---

## Notes

* Do not modify the provided `Vehicle` module.
* Do not add dynamic memory allocation.
* Do not use the `string` class.
* Keep your design simple and focused on inheritance.
* Make sure your output matches the required format exactly.

---

## Submission and testing

Submit the following files:

* `Vehicle.h`
* `Vehicle.cpp`
* `Airplane.h`
* `Airplane.cpp`
* `main.cpp`

Make sure your work compiles and runs correctly with the provided files.

Submisstion command:

```bash
~fardad.soleimanloo/submit 244/labs/inh
```

---

## Focus

You should focus on:

* correct public inheritance
* correct class design for `Airplane`
* correct handling of altitude
* correct implementation of `climb(int)`
* proper use of inherited functionality
* proper overriding of `move()`
* proper overriding of `display()` using the base class version
* correct output formatting


---

## Reminder

This lab is designed to help you understand that in a class hierarchy:

* some inherited functions are used as they are
* some functions are completely replaced in the derived class
* some functions are extended by reusing the base class version
* some functions exist only in the derived class

That is the main idea behind this exercise.
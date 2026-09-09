# Lab: Dynamic Contact

## Objective

In this lab, you will create a simple `Contact` class that stores a contact name using **dynamic memory allocation** and stores a phone number as a 10-digit number.

This lab practises:

* Private data members
* Member functions
* Constructors
* Destructor
* Dynamic memory allocation using `new[]`
* Dynamic memory deallocation using `delete[]`
* Reusing a private helper function
* Basic validation

You must complete this lab using only the C++ concepts covered so far.

---

## The `Contact` Class

Create a class called `Contact` in the `seneca` namespace.

The class stores:

* a dynamically allocated C-string for the contact name
* a phone number as a `long long`

The phone number is valid only if it is between:

```cpp
1000000000LL
```

and

```cpp
9999999999LL
```

This means the phone number must be exactly 10 digits, with no formatting.

For example:

```text
4165551234
```

Do not include spaces, dashes, brackets, or any other formatting.

---

## Files to Create

Create the following three files:

```text
Contact.h
Contact.cpp
main.cpp
```

---

## Contact.h

In `Contact.h`, create the class definition.

The class must be placed inside the `seneca` namespace.

```cpp
#ifndef SENECA_CONTACT_H
#define SENECA_CONTACT_H

namespace seneca {

   class Contact {
      char* m_name;
      long long m_phoneNumber;

      void deallocate();

   public:
      Contact();
      Contact(const char* name, long long phoneNumber);
      ~Contact();

      void setEmpty();
      bool isEmpty() const;
      bool validPhone(long long phoneNumber) const;
      void set(const char* name, long long phoneNumber);
      void display() const;
   };

}

#endif
```

---

## Data Members

### `m_name`

```cpp
char* m_name;
```

This pointer stores the address of a dynamically allocated C-string.

When the contact is empty, `m_name` must be `nullptr`.

### `m_phoneNumber`

```cpp
long long m_phoneNumber;
```

This stores the phone number.

When the contact is empty, `m_phoneNumber` must be `0`.

---

## Private Member Function

### `deallocate`

```cpp
void deallocate();
```

This private member function releases the memory used by `m_name`.

It must:

* delete the dynamic memory pointed to by `m_name`
* set `m_name` to `nullptr`

This function should be reused anywhere the contact name needs to be removed from memory.

You should call this function from:

* the destructor
* the `set` function
* the `setEmpty` function, if needed

---

## Public Member Functions

### Default Constructor

```cpp
Contact();
```

The default constructor creates an empty contact.

It must set:

```cpp
m_name = nullptr;
m_phoneNumber = 0;
```

---

### Two-Argument Constructor

```cpp
Contact(const char* name, long long phoneNumber);
```

This constructor receives a contact name and a phone number.

If both values are valid, it must dynamically store the name and store the phone number.

If either value is invalid, the object must be set to an empty state.

A contact is valid only if:

* `name` is not `nullptr`
* `name` is not an empty string
* `phoneNumber` is between `1000000000LL` and `9999999999LL`

---

### Destructor

```cpp
~Contact();
```

The destructor must release the dynamic memory used by the contact name.

It should call:

```cpp
deallocate();
```

---

### `setEmpty`

```cpp
void setEmpty();
```

This function sets the contact to an empty state.

It must make sure:

```cpp
m_name = nullptr;
m_phoneNumber = 0;
```

If the object already has dynamic memory allocated, that memory must be safely released first.

---

### `isEmpty`

```cpp
bool isEmpty() const;
```

This function returns `true` if the contact is empty.

A contact is considered empty if:

```cpp
m_name == nullptr
```

Otherwise, it returns `false`.

---

### `validPhone`

```cpp
bool validPhone(long long phoneNumber) const;
```

This function returns `true` if the phone number is valid.

A valid phone number must be between:

```cpp
1000000000LL
```

and

```cpp
9999999999LL
```

Otherwise, it returns `false`.

---

### `set`

```cpp
void set(const char* name, long long phoneNumber);
```

This function sets or replaces the contact information.

It must:

* release any old dynamically allocated name
* validate the new name and phone number
* dynamically allocate memory for the new name
* copy the name into the newly allocated memory
* store the phone number

If the new information is invalid, the object must become empty.

---

### `display`

```cpp
void display() const;
```

If the contact is empty, print:

```text
Invalid Contact
```

Otherwise, print the contact in this format:

```text
Name: John Smith, Phone: 4165551234
```

---

## Important Notes

You may use the following C-string functions:

```cpp
strlen
strcpy
```

Make sure to include the required header:

```cpp
#include <cstring>
```

You may also use:

```cpp
#include <iostream>
```

For this lab, do **not** copy `Contact` objects.

The copy constructor and copy assignment operator are not part of this lab. They will be covered later when you learn about classes that manage resources.

---

## Suggested Implementation Order

Complete your work in this order:

* Create `Contact.h`
* Add the class definition
* Create `Contact.cpp`
* Implement the default constructor
* Implement `deallocate`
* Implement `setEmpty`
* Implement `validPhone`
* Implement `isEmpty`
* Implement `set`
* Implement the two-argument constructor
* Implement the destructor
* Implement `display`
* Test using `main.cpp`

---

## Sample main.cpp

You can use the following program to test your class:

```cpp
#include <iostream>
#include "Contact.h"

using namespace std;
using namespace seneca;

int main() {
   Contact c1;
   Contact c2("John Smith", 4165551234LL);
   Contact c3("", 4165551234LL);
   Contact c4("Mary Brown", 12345LL);
   Contact c5(nullptr, 4165551234LL);

   cout << "Testing constructors:" << endl;
   c1.display();
   c2.display();
   c3.display();
   c4.display();
   c5.display();

   cout << endl;

   cout << "Testing set function:" << endl;
   c1.set("Alex Green", 6475559876LL);
   c1.display();

   c1.set("Invalid Phone", 999LL);
   c1.display();

   c1.set("Sara White", 9055551111LL);
   c1.display();

   c1.set(nullptr, 4165552222LL);
   c1.display();

   return 0;
}
```

---

## Expected Output

```text
Testing constructors:
Invalid Contact
Name: John Smith, Phone: 4165551234
Invalid Contact
Invalid Contact
Invalid Contact

Testing set function:
Name: Alex Green, Phone: 6475559876
Invalid Contact
Name: Sara White, Phone: 9055551111
Invalid Contact
```

---

## Submission Checklist

Before submitting, make sure:

* `Contact.h`, `Contact.cpp`, and `main.cpp` are created
* the class is inside the `seneca` namespace
* all data members are private
* `m_name` is dynamically allocated
* `delete[]` is used to release memory
* `deallocate()` is private and reused
* invalid contacts are displayed as `Invalid Contact`
* valid phone numbers are checked using the required range
* the program compiles with no errors
* the output matches the expected output

---

## Submission Command on Matrix

```bash
~fardad.soleimanloo/submit 244/lab02/nxx <ENTER>
```

Replace `xx` with your section. For example:

```text
nra, nbb, naa, etc.
```

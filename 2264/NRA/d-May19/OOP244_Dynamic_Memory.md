# OOP244 Lecture Handout: Dynamic Memory Allocation

## Topic Source
This handout follows the major topics from the OOP244 foundation material on **Dynamic Memory**:

<https://intro2oop.sdds.ca/B-Foundations/dynamic-memory>

---

## Learning Goals

By the end of this lecture, students should be able to:

- Explain the difference between static memory and dynamic memory.
- Use pointers to keep track of dynamically allocated memory.
- Allocate and deallocate dynamic arrays using `new[]` and `delete[]`.
- Allocate and deallocate single dynamic objects using `new` and `delete`.
- Explain why memory leaks happen.
- Recognize common dynamic memory mistakes.

---

## 1. Static Memory vs Dynamic Memory

### Static Memory

Static memory is memory whose size is known before or during program loading. Local variables and fixed-size arrays are examples of memory that the compiler can plan for.

```cpp
int numbers[5];  // size is fixed at compile time
```

This works well when the required size is known ahead of time.

### Dynamic Memory

Dynamic memory is requested while the program is running. It is useful when the required amount of memory depends on user input, file content, or other run-time information.

```cpp
int size;
cin >> size;
int* numbers = new int[size];
```

The program must release this memory manually when it is no longer needed.

---

## 2. Pointers and Dynamic Memory

When dynamic memory is allocated, the program receives an address. That address must be stored in a pointer.

```cpp
int* values = nullptr;
values = new int[10];
```

The pointer itself is a normal variable, but the memory it points to is separate dynamic memory.

Important rule:

> If you lose the pointer address before deleting the memory, you lose access to the allocated memory. That is a memory leak.

---

## 3. Allocating a Dynamic Array

Syntax:

```cpp
pointer = new Type[size];
```

Example:

```cpp
int* marks = new int[count];
```

This creates a dynamic array of `count` integers.

---

## 4. Deallocating a Dynamic Array

Syntax:

```cpp
delete[] pointer;
pointer = nullptr;
```

Example:

```cpp
delete[] marks;
marks = nullptr;
```

Use `delete[]` for memory allocated with `new[]`.

---

## 5. Single Dynamic Objects

Dynamic memory can also be used for one object instead of an array.

```cpp
int* number = new int;
*number = 25;

delete number;
number = nullptr;
```

Use `delete` for memory allocated with `new`.

---

## 6. Matching `new` and `delete`

| Allocation | Deallocation |
|---|---|
| `new Type` | `delete pointer` |
| `new Type[size]` | `delete[] pointer` |

Do not mix them.

Incorrect examples:

```cpp
int* p = new int[5];
delete p;       // Wrong: should be delete[] p
```

```cpp
int* p = new int;
delete[] p;     // Wrong: should be delete p
```

---

## 7. Common Problems

### Memory Leak

A memory leak happens when allocated memory is not deleted before the pointer is lost or changed.

```cpp
int* p = new int[10];
p = new int[20];       // leak: first array cannot be deleted anymore
```

### Dangling Pointer

A dangling pointer points to memory that has already been deleted.

```cpp
int* p = new int[5];
delete[] p;
// p still contains the old address unless we reset it
p = nullptr;
```

### Double Delete

Deleting the same memory twice can crash the program.

```cpp
int* p = new int[5];
delete[] p;
delete[] p;     // dangerous unless p was reset to nullptr
```

---

## 8. Good Habits

- Initialize pointers to `nullptr`.
- Always match `new` with `delete` and `new[]` with `delete[]`.
- Delete dynamic memory before the pointer goes out of scope.
- Set a pointer to `nullptr` after deleting it.
- Avoid changing a pointer to a new address before deleting the old memory.
- Keep allocation and deallocation close together when learning.

---

## Key Takeaway

Dynamic memory gives a program flexibility, but it also gives the programmer responsibility. In OOP244, this becomes especially important when classes manage resources such as dynamic C-style strings and dynamic arrays.

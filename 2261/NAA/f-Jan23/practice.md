## Lab Exercise: Dynamic String Duplication

### Task

Write a function that:

* **Receives two parameters:**

  * A C-string (`const char *`) — a null-terminated character array
  * A **pointer passed by reference** (`char *&`) to receive the new string reference

* **Dynamically allocates memory** for a complete copy of the input string (**including the null terminator**)

* Stores the address of the newly allocated copy in `destination`

* Returns a bool status code:

  * true on success
  * false if memory allocation fails or the source is null

---

### Function signature (use exactly this)

```c
bool duplicate_string(const char *source, char *&destination);
```

---

### Requirements / Rules

* The function **must not modify** the source string.
* If `source` is `NULL`, set `*destination = NULL` and return false.
* The allocated memory must be large enough to hold the entire string **including** the null terminator (`'\0'`).
* Use `new` for dynamic allocation.
* Always check whether the allocation succeeded.
* Copy the string contents (you may use `strcpy`, or a manual loop).
* The caller is responsible for calling `new` on the allocated string when it is no longer needed.
* Do **not** use any global variables.

---

### Expected Behavior Examples

```c
char *copy {};
bool result;

// Normal case
result = duplicate_string("Hello", copy);
// → true, copy points to a new heap-allocated "Hello\0"

result = duplicate_string(NULL, copy);
// → false, copy == NULL

result = duplicate_string("", copy);
// → true, copy points to a new heap-allocated empty string "\0"
```

---

### Deliverables

1. Write the complete **function definition** for `duplicate_string`.
2. Write a short `main()` function that demonstrates:

   * Copying a normal string
   * Modifying the copy (to prove it’s independent)
   * Printing both the original and the copy **before and after** modification
   * Copying a `nullptr` pointer
   * Freeing any allocated memory

---

Good luck — submit clean, well-commented code with proper error handling!

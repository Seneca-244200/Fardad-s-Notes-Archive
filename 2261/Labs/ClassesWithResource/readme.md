## Workshop: **The Label Module – Rule of Three + Operator Overloads**

### Learning goals

* Practise dynamic memory management with a class that owns a C-string
* Apply the **Rule of Three** correctly to prevent memory leaks, shallow copies, and double-deletes
* Overload operators to make the class easier to use and test
* Reinforce **const-correctness** for display-style member functions

### Provided

You are given the `Label` module exactly as shown (the header + source), along with the `cstr` utilities used by the module.

### Your tasks

* **Make the provided module compile cleanly**

  * Ensure declarations and definitions match.
  * Ensure the display function can be called for constant objects (this will matter for the insertion operator).

* **Implement the Rule of Three**

  * Add proper resource cleanup for `m_text`.
  * Ensure copying a `Label` performs a **deep copy** (each object owns its own dynamically allocated text).
  * Ensure copying a “safe empty” label produces a “safe empty” label.

* **Overload assignment to set/reset the text**

  * Add an assignment behaviour that replaces the current `m_text` with new text.
  * Support clearing the label text (reset to safe empty) when the incoming text is invalid / missing.
  * Respect the existing **maximum text length rule (60 characters)** consistently.

* **Overload the insertion operator**

  * Allow a `Label` to be printed using stream insertion (so it can be used like normal stream output).
  * Do **not** use `friend`. Use the public interface to perform the printing.

### Expected behaviour notes

* A label in a safe empty state produces **no output** when printed.
* Copying must not share the same `m_text` pointer between objects.
* Truncation to **60 characters** must not overflow memory and must remain properly null-terminated.

### Testing and submission:

```bash
~fardad.soleimanloo/submit 244/labs/ro5
```

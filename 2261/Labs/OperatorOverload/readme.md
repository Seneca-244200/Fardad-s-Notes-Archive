
## In-Class Lab: Operator Overloads with `Bar`

### Provided Class (Do not change data members)

```cpp
class Bar{
    char m_title[51];
    size_t m_value;
 public:
    Bar(); // safe empty state
    Bar(const char* title, size_t vlaue);
};
```

---

## Definitions and Rules

### Safe Empty State

A `Bar` is in a **safe empty state** when:

* `m_title` is an empty C-string (first character is `'\0'`)
* `m_value` is `0`

### Validation Rules (Mandatory)

These rules apply to **constructors, assignments, reads, and any operator that changes the value or title**:

* If a title is `nullptr` ⇒ object becomes **safe empty**
* If the value is **greater than 79** ⇒ object becomes **safe empty**

> In other words: any attempt to store an invalid title or an out-of-range value must “reset” the object to safe empty state.

---

## Part 1: Queries Using Type Conversion Operators (Getters)

Implement these conversion operators:

* `operator bool() const;`
  Returns `true` only if the object is **not** in safe empty state.

* `operator size_t() const;`
  Returns `m_value` **if valid**, otherwise returns `0`.

* `operator const char*() const;`
  Returns the title C-string ;

---

## Part 2: Mutators Using Operators Only (Setters)

No `setTitle()` / `setValue()` functions allowed.

Implement mutators as operators:

* `Bar& operator=(const char* title);`

  * If `title == nullptr` ⇒ safe empty
  * Otherwise copy into `m_title` (truncate safely if needed)

* `Bar& operator=(size_t value);`

  * If `value > 79` ⇒ safe empty
  * Otherwise set `m_value`

* `Bar& operator+=(size_t value);`

  * Increases the value, but if the result becomes `> 79` ⇒ safe empty

* `Bar& operator-=(size_t value);`

  * Decreases the value, but never below 0 (stays at 0)
  * If it ends up at 0, that’s fine (not automatically empty unless title is also empty)

---

## Part 3: Unary Member Operators (Practice Prefix vs Postfix)

Implement:

* `Bar& operator++();` and `Bar operator++(int);`

  * Add 1, but if value becomes `> 79` ⇒ safe empty

* `Bar& operator--();` and `Bar operator--(int);`

  * Subtract 1, but do not go below 0

---

## Part 4: Binary Member Operators with Another `Bar`

Implement:

* `Bar& operator+=(const Bar& other);`

  * Adds the other bar’s value into this bar
  * If result becomes `> 79` ⇒ safe empty
  * Title handling rule: **left title stays unchanged** (simple and testable)

* `Bar operator+(const Bar& other) const;`

  * Returns a new Bar equal to “copy of left then `+= other`”

---

## Part 5: Stream I/O Without `friend`

### Required member methods

Students must create:

* `std::ostream& draw(std::ostream& os = std::cout) const;`
* `std::istream& read(std::istream& is = std::cin);`

`draw()` output format (exact):

* If valid: 
```
title 
===========================
```
* If safe empty: 
```
Empty Bar
```
#### Example 
A Bar with the title "Count" and value of 20 is as drawn as follows <br />
```
Count
====================
```

`read()` input format:

* Reads a **full line** for title (can contain spaces)
* Reads a value (integer)
* If title is `nullptr` (not possible from input directly, but may happen in tests) or value `> 79` ⇒ safe empty

### Then create helper operators (outside the class, no friend)

* `operator<<` must call `draw()`
* `operator>>` must call `read()`

---

## Part 6: Comparisons (Value-Based)

Implement:

* `bool operator==(const Bar& other) const;`
* `bool operator!=(const Bar& other) const;`
* `bool operator<(const Bar& other) const;`
* `bool operator>(const Bar& other) const;`

Comparison basis:

* Compare by `m_value` (safe-empty bars compare as value 0)

---

## In-Class Checklist (What will be demonstrated)

* Construct valid and invalid objects (including `nullptr` title and `value > 79`)
* Show validity with `if(bar)`
* Extract value and title via conversion operators
* Use operator “setters”: `bar = "Tea"; bar = 55;`
* Show `++bar`, `bar++`, `--bar`, `bar--`
* Show `bar += other;` and `bar + other`
* Use `cin >> bar` and `cout << bar` through non-friend helpers



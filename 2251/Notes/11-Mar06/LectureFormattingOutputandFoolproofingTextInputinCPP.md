
# **Lecture: Formatting Output and Foolproofing Text Input in C++**
## **Scope:**
- **Output Formatting** using `ostream` member functions (without manipulators).
- **Foolproof Text Input Handling** using `istream` member functions.
- **Using `peek()` for input preview.**
- **Using `gcount()` for character counting.**
- **Understanding `istream::get()` (all overloads) and its difference from `getline()`.**
- **Demonstration and Best Practices.**

---

## **1. Introduction**
### **Why Learn This?**
- **Output formatting** makes data readable.
- **Foolproofing input** prevents crashes and unexpected behavior.
- **Understanding `istream::get()`** helps in reading **characters and strings safely**.
- **Knowing the difference between `get()` and `getline()`** helps avoid common input pitfalls.

---

## **2. Formatting Output Using `ostream` Member Functions**
### **Basic Methods**
#### **a) Controlling Field Width**
```cpp
cout.width(10);
cout << 123 << endl;
```
#### **b) Setting Fill Characters**
```cpp
cout.fill('*');
cout.width(10);
cout << 456 << endl;  // Output: *******456
```
#### **c) Adjusting Text Alignment**
```cpp
cout.setf(ios::left);
cout.width(10);
cout << 789 << endl;  // Output: "789       "

cout.unsetf(ios::adjustfield); // Reset alignment setting

cout.setf(ios::right);
cout.width(10);
cout << 789 << endl;  // Output: "       789"
```
#### **d) Controlling Number Formatting**
```cpp
cout.precision(2);
cout.setf(ios::fixed);
cout << 3.14159 << endl;  // Output: 3.14
```

---

## **3. Foolproof Text Input Handling Using `istream` Member Functions**
### **Basic Input Handling**
#### **a) Validating Numeric Input**
```cpp
while (cin.fail()) {  
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Invalid! Enter an integer: ";
    cin >> num;
}
```
#### **b) Reading Full Line Input with `getline()`**
```cpp
char name[50];
cin.getline(name, 50);
```
#### **c) Previewing Input with `.peek()`**
```cpp
#include <iostream>
#include <cctype>  // Required for isdigit()

using namespace std;

int main() {
    char ch = cin.peek();
    if (isdigit(ch)) { 
        cout << "You entered a number first.\n"; 
    }
}
```
✅ **Note:** `isdigit()` is defined in `<cctype>`, so it must be included.

#### **d) Counting Characters with `.gcount()`**
```cpp
cin.getline(buffer, 20);
cout << "Characters read: " << cin.gcount() - 1 << endl;  
```

---

## **4. Using `istream::get()` – Understanding All Overloads**
The `get()` function reads **characters** from input streams. It has **three overloads**:

### **(1) `char get()` – Returns a Single Character**
```cpp
char ch;
ch = cin.get();  // Reads a single character
cout << "You entered: " << ch << endl;
```

---

### **(2) `istream& get(char&)` – Stores a Character by Reference**
```cpp
char ch;
cin.get(ch);
cout << "You entered: " << ch << endl;
```

---

### **(3) `istream& get(char*, streamsize, char delim = '\n')` – Reads Multiple Characters**
```cpp
char str[20];
cin.get(str, 20);
cout << "You entered: " << str << endl;
```

---

## **5. Difference Between `get()` and `getline()`**
| Feature            | `get(char*, size, delim)` | `getline(char*, size, delim)` |
|-------------------|--------------------------|------------------------------|
| Reads string      | ✅ Yes                     | ✅ Yes                        |
| Stops at `delim`  | ✅ Yes                     | ✅ Yes                        |
| Extracts `delim`  | ❌ No (left in buffer)     | ✅ Yes (removed from buffer)  |

### **Example: Difference Between `get()` and `getline()`**
```cpp
char buffer1[20], buffer2[20];

cout << "Enter first input: ";
cin.get(buffer1, 20);  // Stops at '\n' but does NOT remove it

cout << "Enter second input: ";
cin.getline(buffer2, 20);  // Removes '\n' from buffer

cout << "First: " << buffer1 << endl;
cout << "Second: " << buffer2 << endl;
```

---

## **6. Combining Foolproof Input, `peek()`, `gcount()`, and `get()`**
```cpp
#include <iostream>
#include <cctype>  // Required for isalpha()

using namespace std;

int main() {
    char firstChar;
    
    cout << "Enter a character: ";
    
    firstChar = cin.peek();  // Preview next character
    
    if (!isalpha(firstChar)) { // Check if first character is a letter
        cout << "Invalid! Must start with a letter.\n";
        cin.ignore(1000, '\n');
        return 1;  // Exit with error
    }

    char name[30];
    cout << "Enter your name: ";
    cin.get(name, 30);  // Read input

    cout << "You entered: " << name << endl;
    cout << "Characters read: " << cin.gcount() - 1 << endl;

    return 0;
}
```
✅ **Note:** Since `isalpha()` is used, `<cctype>` is required.

---

## **7. Summary**
### **Key Takeaways**
✅ Use `.width(n)`, `.fill(ch)`, and `.setf(ios::alignment)` for formatting.  
✅ Apply `.precision(n)` and `.setf(ios::fixed/scientific)` for number formatting.  
✅ Use `.fail()`, `.clear()`, and `.ignore()` to handle invalid input.  
✅ `.peek()` previews the next character **without consuming it**.  
✅ `.gcount()` retrieves the number of characters read in the last operation.  
✅ `.get()` has **three overloads**:
   - `get()` (single char, returns `EOF` on failure).
   - `get(char&)` (stores a character reference).
   - `get(char*, size, delim)` (reads a string, **leaves delimiter in buffer**).  
✅ `.getline()` works **like `get()` but removes the delimiter**.  
✅ `isdigit()` and `isalpha()` **are defined in `<cctype>` and require explicit inclusion**.  

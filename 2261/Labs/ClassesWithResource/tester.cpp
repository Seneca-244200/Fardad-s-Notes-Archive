// tester.cpp
// Tester for the Label workshop
// Uses ONLY: copy constructor, copy assignment, assignment-to-text, and insertion operator (<<).

#include <iostream>
#include "Label.h"

using namespace std;
using namespace seneca;

int main() {
   cout << "=========================================\n";
   cout << "Label Workshop Tester\n";
   cout << "=========================================\n\n";

   // 1) Safe empty state (should print nothing)
   cout << "[1] Safe empty state:\n";
   Label empty;
   cout << empty << endl;   // should produce no label output

   // 2) Normal construction + insertion operator
   cout << "[2] Normal label output:\n";
   Label a("OOP244", '#');
   cout << a << endl;

   // 3) Copy constructor (Rule of 3)
   cout << "[3] Copy constructor test:\n";
   Label b = a;             // copy constructor must deep copy
   cout << "Original:\n" << a << endl;
   cout << "Copy:\n" << b << endl;

   // 4) Assignment-to-text (overloaded operator= to reset m_text)
   cout << "[4] Assignment-to-text test (change original text):\n";
   a = "Changed";           // must free old text and deep copy new text
   cout << "Original after change:\n" << a << endl;
   cout << "Copy should remain unchanged:\n" << b << endl;

   // 5) Copy assignment operator (Rule of 3)
   cout << "[5] Copy assignment test:\n";
   Label c("Something Else", '*');
   cout << "Before assignment:\n" << c << endl;
   c = a;                   // copy assignment must deep copy (and handle self-assignment safely)
   cout << "After assignment (should match 'a'):\n" << c << endl;

   // 6) Self-assignment (should do nothing harmful)
   cout << "[6] Self-assignment test:\n";
   c = c;                   // should not crash, corrupt, or leak
   cout << c << endl;

   // 7) Clearing text (assignment-to-text with nullptr should reset to safe empty)
   cout << "[7] Clear text using nullptr:\n";
   c = nullptr;             // should go to safe empty state
   cout << c << endl;       // should print nothing

   cout << "=========================================\n";
   cout << "End of tester\n";
   cout << "=========================================\n";

   return 0;
}

/*
What might go wrong if the Rule of 3 / operators are incorrect?

- If the copy constructor or copy assignment does a SHALLOW COPY (copies the pointer only):
  - Program may CRASH at the end (double delete) when destructors run.
  - One object changing its text may also change the other’s output unexpectedly.

- If copy assignment does not CLEAN UP existing memory before taking the new text:
  - Memory LEAK (your checker/valgrind will report leaked blocks).

- If destructor is missing or incorrect:
  - Memory LEAK (no deletion), or CRASH (wrong delete/delete[] or deleting invalid pointer).

- If assignment-to-text (operator= with const char*) doesn’t handle nullptr properly:
  - It may CRASH (trying to copy from nullptr), or it may print garbage/unexpected output.

- If operator<< is not implemented correctly:
  - The code may FAIL TO COMPILE, or output formatting may not match expectations.
*/
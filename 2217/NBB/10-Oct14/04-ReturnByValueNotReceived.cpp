#include <iostream>
#include "Cls.h"
using namespace std;
using namespace sdds;
Cls  foo();

int main() {
   cout << "before" << endl;
   foo();
   cout << "after" << endl;
   return 0;
}

Cls foo() {
   Cls A;
   cout << "Enter value for Cls: ";
   cin >> A;
   cout << "You Entered: " << A << endl;
   return A;
}
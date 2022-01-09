#include <iostream>
#include "Cls.h"
using namespace std;
using namespace sdds;
Cls  foo();
void  foo(Cls A);

int main() {
   foo(foo());// A namless Temp object will never get copied.
   return 0;
}

Cls foo() {
   Cls A;
   cout << "Enter value for Cls: ";
   cin >> A;
   cout << "You Entered: " << A << endl;
   return A;
}

void foo(Cls A) {
   cout << "In foo: " << A << endl;
}
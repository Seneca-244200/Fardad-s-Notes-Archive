#include <iostream>
#include "Cls.h"
using namespace std;
using namespace sdds;
Cls foo();

int main() {
   Cls B = "Obj in Main"; // assignment at the moment of
                          // creation is a call to
                          // the one argument constructor
   B = foo();
   cout << B << endl;
   return 0;
}

Cls foo() {
   Cls A;
   cout << "Enter value for Cls: ";
   cin >> A;
   cout << "You Entered: " << A << endl;
   return A;
}
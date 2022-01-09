#include <iostream>
#include "ClsLog.h"
using namespace std;
using namespace sdds;
ClsLog  foo();

int main() {
   clog.setstate(ios::failbit);
   cout << "before" << endl;
   foo();
   cout << "after" << endl;
   return 0;
}

ClsLog foo() {
   ClsLog A;
   cout << "Enter value for Cls: ";
   cin >> A;
   cout << "You Entered: " << A << endl;
   return A;
}
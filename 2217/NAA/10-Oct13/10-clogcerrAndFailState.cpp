#include <iostream>
#include "ClsLog.h"
using namespace std;
using namespace sdds;
ClsLog foo(ClsLog cl) {
   cout << "in foo: " << cl << endl;
   return cl;
}

int main() {
   clog.setstate(ios::failbit);
   ClsLog A("in main"), B;
   cout << A << endl << B << endl;
   B = foo(A);
   cout << A << endl << B << endl;
   cin >> A;
   if (cin.fail()) {
      cout << "you must enter an integer and a value" << endl;
   }
   else {
      cout << A << endl;
   }
   return 0;
}


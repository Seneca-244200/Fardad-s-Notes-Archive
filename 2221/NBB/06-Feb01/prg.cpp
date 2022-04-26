#include <iostream>
#include "Mark.h"
#include "Utils.h"
using namespace std;
using namespace sdds;

int main() {
   int a = 12;
   double num = 123.45678;
   cout << a << endl;;
   cout << "*";
   cout.width(10);  // only effects the next printout
   cout << a << "*" << endl;
   cout.setf(ios::left); // is forever, unless you unset it
   cout << "*";
   cout.width(10);  // only effects the next printout
   cout << a << "*" << endl;
   cout.unsetf(ios::left); // is forever, unless you unset it
   cout << num << endl;
   cout.setf(ios::fixed); // my format and not the default
   cout.precision(2);
   cout << num << endl;
   cout.setf(ios::left); // is forever, unless you unset it
   cout << "*";
   cout.width(10);  // only effects the next printout
   cout.fill('@');
   cout << a << "*" << endl;
   cout.unsetf(ios::left); // is forever, unless you unset it

   return 0;
}


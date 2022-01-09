#include <iostream>
#include "Cls.h"
using namespace std;
using namespace sdds;
Cls foo();
int main() {
   foo();
   return 0;
}

Cls foo() {
   Cls A;
   cout << "Enter value for A: ";
   cin >> A;
   cout << "In foo: " << A << endl;
   return A;
}
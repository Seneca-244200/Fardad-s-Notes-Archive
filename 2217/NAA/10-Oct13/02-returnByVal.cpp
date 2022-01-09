
#include <iostream>
#include "Cls.h"
using namespace std;
using namespace sdds;
Cls foo();
int main() {
   Cls C = "one";
   // Cls C("one");  same as above
   C = foo();
   cout << C << endl;
   return 0;
}

Cls foo() {
   Cls A;
   cout << "Enter value for A: ";
   cin >> A;
   cout << "In foo: " << A << endl;
   return A;
}
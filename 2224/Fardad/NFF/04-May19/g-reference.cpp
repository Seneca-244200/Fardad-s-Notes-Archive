
#include <iostream>
#include "Employee.h"
using namespace sdds;
using namespace std;

int& foo(int& R) {   // because of line 12, R becomes a new name for A in main
   return R;
}   /// foo() is a new name for R, that is a new name for A
   // therefore, foo()becomes a new name for A

int main() {
   int A = 30;
   cout << A << endl;
   foo(A) = 123;//foo(int& R = A)
   cout << A << endl;
   return 0;
}



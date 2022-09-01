#include <iostream>
#include "Employee.h"
using namespace std;
using namespace sdds;

int& foo(int& R) {
   return R;
}

int main() {
   int A = 10;

   foo(A) = 12345;  // foo(int& R = A);

   cout << A << endl;

   cout << unsigned(&A) << endl;
   cout << unsigned(&foo(A)) << endl;

   return 0;
}
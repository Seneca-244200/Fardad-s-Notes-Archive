#include <iostream>
#include "Employee.h"
using namespace sdds;
using namespace std;

int& foo(int& R) {
   return R;
}

int main() {
   int A = 30;
   cout << A << endl;
   A += 10;
   cout << foo(A) << endl;
   return 0;
}

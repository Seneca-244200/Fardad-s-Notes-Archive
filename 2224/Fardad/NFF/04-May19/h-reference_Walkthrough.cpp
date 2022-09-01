
#include <iostream>
#include "Employee.h"
using namespace sdds;
using namespace std;

int& foo(int& R) {  
   R *= 2;
   return R;
}   
   

int main() {
   int A = 2;
   foo(A) += 10;
   cout << A << endl;
   return 0;
}



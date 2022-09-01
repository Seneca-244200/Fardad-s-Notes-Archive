#include <iostream>
#include "Employee.h"
using namespace sdds;
using namespace std;

void Five(int& R) {
   R = 5;
}

int main() {
   int A = 30;
   cout << A << endl;
   Five(A);      // Five(int& R = A);
   cout << A << endl;
   return 0;
}

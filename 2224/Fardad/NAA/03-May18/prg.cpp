#include "Employee.h"
using namespace sdds;
#include <iostream>
using namespace std;
int main() {
   int a[13] = { 1,3,0,4,15,0,8,76,9,0,4,0,0 };
   int i = 0;
   int nonZero = 0;
   int greaterThan10 = 0;
   for (i = 0; i < 13; i++) {
      nonZero += (a[i] != 0);
      greaterThan10 += (a[i] > 10);
   }
   cout <<
      "Number of nonzeros in a is: "
      << nonZero
      << endl;
   cout << "Val > 10: " << greaterThan10 << endl;
   return 0;
}
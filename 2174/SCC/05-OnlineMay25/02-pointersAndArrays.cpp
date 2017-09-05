#include <iostream>
#include "ptr.h"
using namespace std;
int main() {
   double A[5] = { 20.1, 40.21, 60.3,70.4,90.5 };
   double B[3] = { 1.1,2.3,3.3 };
   double* P = A;
   int i;
   for (i = 0; i < 5; i++) {
      cout << P[i] << " ";
   }
   cout << endl;
   P = B;
   for (i = 0; i < 3; i++) {
      cout << P[i] << " ";
   }
   cout << endl;
   return 0;
}
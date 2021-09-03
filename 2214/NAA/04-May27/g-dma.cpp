#include <iostream>
#include "Scope.h"
using namespace std;
/*
Get few integers from the user and print them and the maximum value among them.
*/
int main() {
   double* vals;
   int num;
   double max;
   cout << "Enter the number of values: ";
   cin >> num;
   vals = new double[num];
   int i;
   for (i = 0; i < num; i++) {
      cout << (i + 1) << ": ";
      cin >> vals[i];
   }
   max = vals[0];
   for (i = 1; i < num; i++) {
      if (max < vals[i]) max = vals[i];
   }
   for (i = 0; i < num; i++) {
      cout << vals[i] << " ";
   }
   cout << endl;
   cout << "greatest value: " << max << endl;

   delete[] vals;
   return 0;
}
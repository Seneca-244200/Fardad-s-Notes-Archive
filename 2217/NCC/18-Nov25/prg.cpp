#include <iostream>
#include "DynArray.h"
using namespace std;
using namespace sdds;
int main() {
   unsigned int i;
   DynArray<double> A(10);
   DynArray<double> D(50);
   cout << "Size is : " << A.size() << endl;
   for (i = 0; i < 15; i++) {
      A[i] = (i + 1) * 10.1234;
   }
   cout << "The size is now : " << A.size() << endl;
   for (i = 0; i < A.size(); i++) {
      cout << A[i] << " ";
   }
   cout << endl;

   A = D; // this is ok because they are the same type, look at nov30 for more explanation
   return 0;
}
#include <iostream>
#include "DynArray.h"
using namespace std;
using namespace sdds;
int main() {
   int i;
   DynArray<double> A(10);
   cout << "Size is : " << A.size() << endl;
   for (i = 0; i < 15; i++) {
      A[i] = (i + 1) * 100.123;
   }
   cout << "The size is now : " << A.size() << endl;
   for (i = 0; i < int(A); i++) {
      cout << A[i] << " ";
   }

   cout << endl;
   return 0;
}
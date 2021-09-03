#include <iostream>
#include "Array.h"
#include "DynArray.h"
using namespace std;
using namespace sdds;


template <typename T>
void prnArray(T& array) {
   for (int i = 0; i < array.size() ; i++) {
      if (i != 0) cout << ',';
      cout << array[i];
   }
   cout << endl;
}

int main() {
   int i;
   Array<int> A(3);
   Array<double> D(4);
   DynArray<double> DA(5);

   for (i = 0; i < 3; i++) {
      A[i] = i + 10;
   }
   for (i = 0; i < 4; i++) {
      D[i] = i + 10.2;
   }

   prnArray(A);
   prnArray(D);

   for (i = 0; i < 7; i++) {
      DA[i] = i + 10.2;
   }

   prnArray(DA);

   return 0;
}











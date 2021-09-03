#include <iostream>
#include "bblsort.h"
using namespace std;
using namespace sdds;

template <typename T>
void prnArray(T array[], int size) {
   for (int i = 0; i < size; i++) {
      if (i != 0) cout << ',';
      cout << array[i];
   }
   cout << endl;
}

int main() {
   int a[5] = { 2,5,2,7,8 };
   double d[4] = {2.2,3.3,1.1,5.5};
   sort(a, 5);
   prnArray(a, 5);
   sort(a, 5, false);
   prnArray(a, 5);
   sort(d, 4);
   prnArray(d, 4);
   sort(d, 4, false);
   prnArray(d, 4);
   return 0;
}











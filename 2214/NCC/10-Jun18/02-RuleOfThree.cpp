#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace sdds;

void prnArray(IntArray I) { // IntArray I = A // call to a single arg constructor
   int i;
   for (i = 0; i < I.size(); i++) {
      cout << "index: " << i
         << " value: " << I[i] << endl;
   }
}

int main() {
   IntArray A(5);
   IntArray B(3);
   int i;
   int val = 5;
   for (i = 0; i < 7; i++, val+=5) {
      A[i] = val;
   }
   prnArray(A);
   B = A;
   prnArray(B);
   return 0;
}
#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace sdds;

void prnArray(IntArray B) {  // IntArray B = A;
   for (int i = 0; i < B.size(); i++) {
      cout << "index " << i << ": " << B[i] << endl;
   }
}

int& foo(int& R) {
   return R;
}

int main() {
   IntArray A(5);
   IntArray B(3);
   int i;
   int val = 5;
   for (i = 0; i < 7; i++, val += 5) {
      A[i] = val;
   }
   prnArray(A);
   A = A;
   B = A;
   prnArray(B);
   return 0;
}













#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace sdds;
                   // IntArray I = A
void BadPrintIntArray(IntArray I) {  // will crash since IntArray does not know how to copy itself
   for (int i = 0; i < I.size(); i++) {
      cout << I[i] << " ";
   }
}
void printIntArray(const IntArray& I) {
   for (int i = 0; i < I.size(); i++) {
      cout << I[i] << " ";
   }
}


int main() {
   const int* ptr;
   IntArray A(20);
   int i;
   for (i = 0; i < A.size(); i++) {
      A[i] = i + 10;
   }
   printIntArray(A);
   cout << endl;
   ptr = (const int*)A;
   for (i = 0; i < 5; i++) {
      cout << ptr[i] << endl;
   }

   return 0;
}
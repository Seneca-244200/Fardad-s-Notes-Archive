#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace sdds;
                // IntArray I = a;
void BadPrintArray(IntArray I) { // crashes because IntArray does not know how to copy itself
   for (int i = 0; i < I.size(); i++) {
      cout << I[i] << endl;
   }
}
void printArray(const IntArray& I) {
   for (int i = 0; i < I.size(); i++) {
      cout << I[i] << endl;
   }
}

int main() {
   int i;
   const int* ptr;
   IntArray a(10);
   ptr = (const int*)a;
   cout << a.size() << endl;
   for (i = 0; i < a.size(); i++) {
      a[i] = (i + 1) * 100;
   }
   printArray(a);
   cout << ptr[3] << endl;
   return 0;
}
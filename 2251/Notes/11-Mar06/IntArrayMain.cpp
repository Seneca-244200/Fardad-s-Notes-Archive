#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace seneca;
void CsvDisplay(const IntArray& I) {
   for (size_t i = 0; i < I.size(); i++) {
      if (i) cout << ", ";
      cout << I[i];
   }
   cout << endl;
}


int main( ) {
   IntArray I(10);
   for (int i = 0, j = 0; i < 12; i++) {
      I[i] = j += 10;
   }
   CsvDisplay(I);
   return 0;
}
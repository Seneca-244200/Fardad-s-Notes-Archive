#include <iostream>
#include <array>   // strandard Template Library
#include "Utils.h"

using namespace std;
using namespace sdds;

template <typename T, int size>
void prnArray(const array<T, size>& I) {
   for(int i = 0; i < I.size(); i++) {
      cout << I[i] << " ";
   }
   cout << endl;
}

int main() {
   array<double,5> A;
   int i;
   for(i = 0; i < 5; i++) {
      A[i] = i + 5.234;
   }
   prnArray(A);
   return 0;
}
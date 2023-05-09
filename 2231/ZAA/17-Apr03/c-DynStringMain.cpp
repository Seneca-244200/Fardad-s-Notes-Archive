#include <iostream>
#include <array>
#include "Utils.h"

using namespace std;
using namespace sdds;

template <typename T>
void prnArray(const array<T>& I) {
   for(int i = 0; i < I.size(); i++) {
      cout << I[i] << " ";
   }
   cout << endl;
}

int main() {
   array<double> A(5);
   int i;
   for(i = 0; i < 10; i++) {
      A[i] = i + 10.123;
   }
   prnArray(A);
   return 0;
}
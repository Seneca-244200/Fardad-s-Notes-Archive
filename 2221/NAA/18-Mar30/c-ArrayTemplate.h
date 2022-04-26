#include <iostream>
#include <iomanip>
#include "Utils.h"
#include "Array.h"
using namespace std;
using namespace sdds;


template <typename type>
void prnArray(const Array<type>& d) {
   for (unsigned i = 0; i < d.size(); i++) {
      if (i != 0) cout << ", ";
      cout << d[i];
   }
   cout << endl;
}

int main() {
   Array<double> D(5);
   Array<int> I(10);
   for (unsigned i = 0; i < 10; i++) {
      D[i] = i * 12.345;
   }
   for (unsigned i = 0; i < 20; i++) {
      I[i] = i * 12;
   }
   prnArray(D);
   prnArray(I);




   return 0;
}

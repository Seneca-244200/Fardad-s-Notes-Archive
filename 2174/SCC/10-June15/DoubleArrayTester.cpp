#include <iostream>
#include "DoubleArray.h"
using namespace std;
using namespace sict;
void DspDbArrayCSV(DoubleArray AR) {
   int i;
   for (i = 0; i < AR.size(); i++) {
      cout << AR[i];
      if (i != AR.size() - 1) cout << ", ";
   }
   cout << endl;
}
int main() {
   DoubleArray D(10), E(20), F(30);
   int i;
   double x = 0.1;
   for (i = 0; i < D.size(); i++) {
      D[i] = x;
      x += 0.1;
   }
   F = E = D;
   DspDbArrayCSV(E);
   cout << endl;
   return 0;
}
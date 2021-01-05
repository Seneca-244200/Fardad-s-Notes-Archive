#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace sdds;
void prn(IntArray& ar) {
   for (unsigned int i = 0; i < ar.size(); i++) {
      cout << ar.element(i) << " ";
   }
   cout << endl;
}
int main() {
   IntArray A(5);
   IntArray B(10);
   A.element(3) = 25;
   int i;
   for (i = 0; i < 5; i++) {
      B.element(i) = 24 * i;
   }
   prn(A);
   prn(B);
   return 0;
}
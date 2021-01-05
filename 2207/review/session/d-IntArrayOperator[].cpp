#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace sdds;
void prn(IntArray& ar) {
   for (unsigned int i = 0; i < ar.size(); i++) {
      cout << ar.operator[](i) << " ";
      //cout << ar[i] << " ";
   }
   cout << endl;
}
int main() {
   IntArray A(5);
   IntArray B(10);
   A[3] = 25;
   int i;
   for (i = 0; i < 15; i++) {
      B[i] =  i;
   }
   prn(A);
   prn(B);
   return 0;
}
#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace sdds;
void prn(IntArray ar) {
//   if(ar.operator bool()){ // if I am nuts, I can do this
   if (ar) {
      for (unsigned int i = 0; i < ar.size() ; i++) {
         cout << ar.operator[](i) << " ";
      }
   }
   else {
      cout << "Empty array";
   }
   cout << endl;
}
int main() {
   IntArray A;
   IntArray B(10);
   prn(A);
   A[3] = 25;
   int i;
   for (i = 0; i < 15; i++) {
      B[i] =  i;
   }
   prn(A);
   prn(B);
   A = B;
   prn(A);
   return 0;
}
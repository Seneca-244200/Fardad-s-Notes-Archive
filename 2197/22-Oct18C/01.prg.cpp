#include <iostream>
#include "IntArray.h"
using namespace sdds;
using namespace std;
void displayIntArray(IntArray& iaC) {
   if (iaC) {
      for (int i = 0; i < iaC.size(); i++) {
   //      cout << iaC.elementAt(i) << " ";
         cout << iaC[i] << " ";
      }
      cout << endl;
   }
   else {
      cout << "iaC is empty" << endl;
   }
}
int main() {
   IntArray ia;
   int c[3] = { 10, 20, 30 };
   IntArray B(10);
   IntArray iaC(c, 3);
   IntArray X = iaC;
   IntArray& R = X;
   B = X;
   X = X;
   R = X;
   displayIntArray(ia);
   displayIntArray(iaC);
   for (int i = 0; i < 10; i++) {
      cout << iaC[i] << " ";
   }

   return 0;
}
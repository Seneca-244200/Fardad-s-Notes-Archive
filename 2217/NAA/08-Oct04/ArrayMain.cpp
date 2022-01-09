

#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace sdds;

int main() {
   IntArray Ir(2);
   int i;
   for (i = 0; i < 1000; i++) {
      //Ir.element(i) = i + 10;
      Ir[i] = i + 10 ; // Ir.operator[](i);
   }
   for (i = 0; i < Ir.size(); i++) {
      //cout << Ir.element(i) << " ";
      cout << Ir[i] << " ";
   }
   cout << endl;
   return 0;
}
#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace sdds;
void display(IntArray A) {
   cout << A << endl;
}
int main() {
   IntArray Ir(5);
   IntArray B;
   int i;
   for (i = 0; i < 5; i++) {
      Ir[i] = 10 + i;
   }
   display(Ir); // display(IntArray A = Ir);
   cout << Ir << endl;
   for (i = 0; i < 3; i++) {
      B[i] = i + 1;
   }
   cout << B << endl;
   Ir = Ir;
   B = Ir;
   cout << B << endl; 
   cout << Ir << endl;
   return 0;
}
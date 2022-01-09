#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace sdds;

void display(IntArray A) {
   cout << "Displaying IntArray: " << endl;
   cout << A << endl;
   cout << "Done" << endl;
}

int main() {
   IntArray Ir(2);
   IntArray X(10);
   int i;
   for (i = 0; i < 10; i++) {
      Ir[i] = i + 10;  // Ir.operator[] (i);
   }
   display(Ir); // display(IntArray A = Ir);
   cout << Ir << endl;
   X = Ir;
   cout << X << endl;
   Ir = Ir;
   cout << Ir << endl;
   return 0;
}
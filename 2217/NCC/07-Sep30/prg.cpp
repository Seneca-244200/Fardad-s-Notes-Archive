

#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace sdds;

void display(const IntArray& A) {
   for (int i = 0; i < A.size()+10; i++) {
      cout << A[i] << " ";
   }
   cout << endl;
}

int main() {
   IntArray Ir(2);
   int i;
   for (i = 0; i < 1000; i++) {
      Ir[i] = i + 10;  // Ir.operator[] (i);
    }
   display(Ir);
   cout << endl;
   return 0;
}
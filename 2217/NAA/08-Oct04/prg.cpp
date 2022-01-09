#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace sdds;
void display(IntArray A) {
   cout << A << endl;
}
int main() {
   IntArray Ir(5);
   for (int i = 0; i < 5; i++) {
      Ir[i] = 10 + i;
   }
   display(Ir); // the function is called as display(A = Ir);
   cout << Ir << endl;
   return 0;
}
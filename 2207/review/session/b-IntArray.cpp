#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace sdds;

int main() {
   IntArray A(5);
   IntArray B(10);
   A.element(3) = 25;
   int i;
   for (i = 0; i < 5; i++) {
      cout << A.element(i) << endl;
      B.element(i) = 24 * i;
   }
   for (i = 0; i < 10; i++) {
      cout << B.element(i) << " ";
   }
   cout << endl;

   return 0;
}
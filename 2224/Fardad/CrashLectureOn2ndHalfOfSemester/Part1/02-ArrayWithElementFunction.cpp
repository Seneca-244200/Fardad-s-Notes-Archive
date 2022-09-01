#include <iostream>
#include "DblArray.h"
using namespace std;
using namespace sdds;
int main() {
   DblArray X(5);
   DblArray A{}, B;
   int i;
   X = X; // self copying

   for (i = 0; i < 7; i++) {
      X.element(i) = i * 10.0;
   }
   for (i = 0; i < X.size() ; i++) {
      cout << X.element(i) << " ";
   }
   cout << endl;
   return 0;
}











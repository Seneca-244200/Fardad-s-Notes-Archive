#include <iostream>

using namespace std;
#include "Arrary.h"


int main() {
   int i;
   Array<double> I(5);
   for (i = 0; i < 7; i++) {
      I[i] = i * 10.3;
   }
   for (i = 0; i < I.size(); i++) {
      if (i) cout << ", ";
      cout << I[i];
   }
   cout << endl;
   int a;

   return 0;
}
#include <iostream>
#include "DblArray.h"
using namespace std;
int main() {
   DblArray d(5);
   cout << d << endl;
   for (int i = 0; i < 7; i++) {
      d[i] = i + 10.345;
   }

   cout << d << endl;

   for (int i = 0; i < 7; i++) {
      d[i]+= 3000;
   }

   cout << d << endl;

   cout << "d was printed " << d.noOfPrns() << " times" << endl;
   return 0;
}
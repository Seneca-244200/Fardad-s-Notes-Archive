#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "Array.h"
int main() {
   int i;
   Array<double> I(5);
   for (i = 0; i < 7; i++) {
      I[i] = i * 10.3;
   }
   for (i = 0; i < I.size(); i++) {
      cout << I[i] << " ";
   }
   cout << endl;

   return 0;
}

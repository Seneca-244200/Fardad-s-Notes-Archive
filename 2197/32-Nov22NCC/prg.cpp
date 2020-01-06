#include <iostream>
using namespace std;
#include "Array.h"



int main() {
   int i;
   Array<int>  I(5);
   for (i = 0; i < 7; i++) {
      I[i] = i * 10.1;
   }
   for (i = 0; i < I.size(); i++) {
      cout << I[i] << " ";
   }
   return 0;
}
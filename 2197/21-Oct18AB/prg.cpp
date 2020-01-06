#include <iostream>
#include "IntArray.h"
using namespace sdds;
using namespace std;
int main() {
   int i, j = 100;
   IntArray ia(10);
   int* data;
   for (i = 0; i < 10; i++, j+=100) {
      ia[i] = j;
   }
   for (i = 0; i < 10; i++) {
      cout << ia[i] <<  " ";
   }
   cout << endl;
   //ia.resize(20);
   for (i = 10;  i < 20; i++, j += 100) {
      ia[i] = j;
   }
   for (i = 0; i < 20; i++) {
      cout << ia[i] << " ";
   }
   cout << endl;
   data = &ia[0];
   for (i = 0; i < 20; i++) {
      cout << data[i] << " ";
   }
   cout << endl;
   return 0;
}
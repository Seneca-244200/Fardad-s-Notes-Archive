#include <iostream>
#include "IntArray.h"
using namespace sdds;
using namespace std;
int main() {
   int i, j = 100;
   IntArray ia(10);
   for (i = 0; i < 10; i++, j += 100) {
      ia[i] = j;
   }
   for (i = 0; i < ia.size() ; i++) {
      cout << ia[i] << " ";
   }
   cout << endl;
   //ia.resize(20);
   for (i = 10; i < 20; i++, j += 100) {
      ia[i] = j;
   }
   for (i = 0; i < 20; i++) {
      cout << ia[i] << " ";
   }
   cout << endl;
   ia[50] = 123456;
   for (i = 0; i< ia.size(); i++) {
      cout << ia[i] << " ";
   }
   return 0;
}
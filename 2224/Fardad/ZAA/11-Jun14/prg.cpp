#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   String hello = "Fardad";// call to one arg constructor
   cout << hello[3] << endl;
   for(int i = 0; i < 50; i++) {
      cout << hello[i];
   }
   cout << endl;
   hello[3] = 'h';
   cout << hello << endl;
   return 0;
}

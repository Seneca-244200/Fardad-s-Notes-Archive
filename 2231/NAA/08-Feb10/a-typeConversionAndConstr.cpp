#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   String name = "Fardad", empty;
   cout << name << endl;
   if (empty) {
      cout << empty << endl;
   }
   else {
      cout << "The string is emtpy!" << endl;
   }
   return 0;
}
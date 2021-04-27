#include <iostream>
#include "Name.h"
using namespace sdds;
using namespace std;

int main() {
   Name N[4] = { 
      "One", 
      "Two", 
      {"Three",4}
   };
   for (int i = 0; i < 4; i++) {
      N[i].print() << endl;
   }
   return 0;
}
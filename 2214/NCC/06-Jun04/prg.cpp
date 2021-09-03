#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;
int main() {
   sdds::debug = true;
   int i{};
   Name* n[5] = { new Name("Fred","Soley"), new Name("Jack"), new Name };
   for (; i < 5; i++) {
      if (n[i]) n[i]->print();
   }
   for (i = 0; i < 5; i++) {
      delete n[i];
   }
   return 0;
}
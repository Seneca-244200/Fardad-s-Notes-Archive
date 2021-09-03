#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;
int main() {
   sdds::debug = true;
   Name n[5]{{"Fred","Soley"}, "Jack", "Jane"};
   for (int i{}; i < 5; i++) {
      n[i].print();
   }
   return 0;
}
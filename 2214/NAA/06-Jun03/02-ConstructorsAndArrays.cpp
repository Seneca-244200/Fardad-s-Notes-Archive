#include <iostream>
#include "Name.h"
using namespace sdds;
using namespace std;
int main() {
   sdds::debug = true;
   //int i{}; // syntax for defaulting any type of object
   Name n[7]{ {"Fred", "Flintstone"}, "Jack", "John"
           , Name("Lee"), Name("Junwoo", "Lee") };
   for (int i = 0; i < 7; i++) {
      n[i].print();
   }
   return 0;
}
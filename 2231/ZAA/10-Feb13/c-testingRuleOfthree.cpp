#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   String name = "Fred", last = "Soley";
   name += " ";
//   fullname = name += last;
   name += last;
//   String fullname = name; // Potato
   String fullname(name);   // Potaato
   String empty;
   name = name;

   last = name;

   cout << fullname << endl;
   fullname = empty;
   cout << fullname << endl;
   return 0;
}
#include <iostream>
#include "Name.h"
using namespace sdds;
using namespace std;

int main() {
   Name A; // default constructor

   Name N[4] = { 
      Name("One"),// create a temp nameless object
      Name("Two"),
      Name("Three", 4)
   };

   Name("Temp Namelss Object").print() << endl;
   for (int i = 0; i < 4; i++) {
      N[i].print() << endl;
   }

   A.setName("Stand alone object");
   A.print() << endl;

   return 0;
}
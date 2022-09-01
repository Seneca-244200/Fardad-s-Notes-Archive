
#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   String name = "Fardad";
   String dad = "dad";
   if(name.contains("dad")) {
      cout << name << " contains " << "dad" << endl;
   }
   if(name.contains(dad)) {
      cout << name << " contains " << dad << endl;
   }

   return 0;
}
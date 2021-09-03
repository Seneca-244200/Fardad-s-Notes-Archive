#include <iostream>
#include "Container.h"
using namespace sdds;
using namespace std;
int main() {
   Container C("Milk", 200.0);
   Container D;
   C.print() << endl;
   ++C;
   C.print()  << endl;
   D = ++C;
   D.print() << endl;
   C = -2.0;
   if (!C) {
      cout << "C was set to an invalid value! " << endl;
   }
   
   return 0;
}
#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {
   Container C(100, 150);
   Container D;
   Container E(200, 230);
   Container tooMuch(1000, 500);
   C.display() << endl;
   D.display() << endl;
   E.display() << endl;

   E = D += C;   // D.+=(C)  D.operator+=(C) <- this will be the function call that is made when += is invoked;
                // E.operator=(D)
   C.display() << endl;
   D.display() << endl;
   E.display() << endl;
   tooMuch.display() << endl;
   return 0;
}

#include <iostream>
#include "Container.h"
using namespace std;

using namespace sdds;

int main() {
   Container C(100, 300);
   Container D;
   Container E(200, 230);
   Container tooMuch(1000, 500);
   C.display(cout << "C: ") << endl;
   D.display(cout << "D: ") << endl;
   E.display(cout << "E: ") << endl;
   D = E += C;  // E.operator+=(C)
                // D.operator=(E)
   C.display(cout << "C: ") << endl;
   D.display(cout << "D: ") << endl;
   E.display(cout << "E: ") << endl;
   tooMuch.display() << endl;
   return 0;
}
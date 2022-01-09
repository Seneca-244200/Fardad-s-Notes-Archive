#include <iostream>
#include "Container.h"
using namespace std;

using namespace sdds;

int main() {
   Container C(100, 300);
   Container D;
   Container E(200, 230);

   C.display(cout << "C: ") << endl;
   D.display(cout << "D: ") << endl;
   E.display(cout << "E: ") << endl;

   D = ++C; // C.operator++();

   C.display(cout << "C: ") << endl;
   D.display(cout << "D: ") << endl;
   E.display(cout << "E: ") << endl;
   return 0;
}

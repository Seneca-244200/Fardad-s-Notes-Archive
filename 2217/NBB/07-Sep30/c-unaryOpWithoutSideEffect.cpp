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
   if (!D) { // D.operator!();
      D.display(cout << "Empty Container: ") << endl;
   }
   D = C + E; // C.operator+(E);

   C.display(cout << "C: ") << endl;
   D.display(cout << "D: ") << endl;
   E.display(cout << "E: ") << endl;
   return 0;
}

#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;


int main() {
   Container C, D, E, F, G;
//   C.display() << endl;
   C.set("Milk", 250.0);
   D.set("Water", 100.0);
   E.set("Milk", 200.0);
   C.display() << endl;
   D.display() << endl;
   E.display() << endl;
//   F = C.operator+(G);
   F = C + G;// operator+ does not have side effect...
   F.display() << endl;
   if (!F) {
      cout << "F is not in a valid state!" << endl;
   }
//   F = C.operator+(D);
   F = C + D;
   F = "Skim milk";
   F.display() << endl;
//   F = C.operator+(E);
   F = C + E;
   F.display() << endl;
//   D.add(35.0);
   G = D += 35.0;
   ++G;
   D.display() << endl;
   G.display() << endl;

//   cout << G << endl;

   return 0;
}
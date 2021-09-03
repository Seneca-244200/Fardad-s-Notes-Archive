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
   F = C.sum(G);
   F.display() << endl;
   F = C.sum(D);
   F.display() << endl;
   F = C.sum(E);
   F.display() << endl;
   D.add(350.00);
   D.display() << endl;
   return 0;
}
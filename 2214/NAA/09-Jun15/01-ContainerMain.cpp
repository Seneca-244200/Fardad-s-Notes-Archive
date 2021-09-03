
#include <iostream>
#include "Container.h"
#include "utils.h"
using namespace sdds;
using namespace std;

int main() {
   Container C;
   Container D;
   Container E;
   C.set("Milk", 250.00);
   D.set("Water", 100.00);
//   E = C.operator+(D);

   E = C + D; // is identcal to the above
   // this operator does not have side effect


   E.print();
//   E.set(1000);
   E = 1000;
   E.print();
   E = "Watered down milk";
   E.print();
   C = E += 250.0;
   E.print();
   C.print();
   return 0;
}
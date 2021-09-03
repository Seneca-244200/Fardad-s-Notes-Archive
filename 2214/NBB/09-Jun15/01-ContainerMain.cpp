#include <iostream>
#include "Container.h"
using namespace sdds;
using namespace std;

int main() {
   Container C, D, E, F, G;
   C.print() << endl;
   C.set("Milk", 250.0);
   C.print() << endl;
   D.set("Water", 125.0);
   E.set("Milk", 100.0);

//   F = C.sum(D);
//   F = C.operator+(D);

   F = C + D;

   F.print() << endl;
   //F.set("Skim Milk");

   
   F = "Skim Milk";
   F.print() << endl;
//   F = C.sum(E);
//   F = C.operator+(E);
   F = C + E;

   F.print() << endl;
   
//   C.add(50.0);
//   C.operator+=(50.0);

   F = C += 50.0;

   C.print() << endl;
   F.print() << endl;

   F = -34.5;
   //if (F.isSafeEmpty()) {
   if (!F) {
      cout << "Assignment to negative value failed" << endl;
   }
   F.print() << endl;

//   cout << F << endl;

   return 0;
}
#include <iostream>
#include "Printer.h"

using namespace std;
using namespace seneca;

int main() {
   iMachine* machines[3];

   machines[0] = new Printer("LaserJet", 500, 30);
   machines[1] = new Printer("DeskJet", 350, 20);
   machines[2] = new Printer("OfficePro", 600, 40);

   cout << "Display Test" << endl;
   for (int i = 0; i < 3; i++) {
      cout << *machines[i] << endl;
   }

   cout << endl;
   cout << "Operation Test" << endl;
   for (int i = 0; i < 3; i++) {
      machines[i]->operate();
   }

   for (int i = 0; i < 3; i++) {
      delete machines[i];
   }

   return 0;
}
#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   // assignment at the moment of creation
   // invokes a one argument constructor
   Mark M = "Workshop 5";
   Mark N("Workshop 3", 3, 100);
   int i(5);
   for (int j(0); j < 10; j++) {

   }
   M.display() << endl;
   cout << i << endl;
   int k = 0;  // initializtion
   int m;  // garbage first
   m = 0;  // set tozero
   M.set("Antoher value");

   return 0;
}

//~fardad.soleimanloo/submit IWatchedFeb3<ENTER>
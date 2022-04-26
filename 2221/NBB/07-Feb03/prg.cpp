#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   // assignment at the moment of creation
   // invokes a one argument constructor
   Mark M = "Workshop 5";
   Mark O("One Argumment Same As N");
   Mark N("Workshop 3", 3, 100);
   int i(5);
   M.display() << endl;
   O.display() << endl;
   cout << i << endl;
   return 0;
}


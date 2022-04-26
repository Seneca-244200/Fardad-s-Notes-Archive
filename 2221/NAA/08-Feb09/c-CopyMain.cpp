#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   Mark A("Test", 10, 15);  // init
   Mark B = A; // identical to Mark B(A)<<<<<<<<<<<<<
   A.display() << endl;
   B.display() << endl;
   return 0;
}


#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   Mark A("Test", 10, 15);  // init
   Mark B = A; // identical to Mark B(A)<<<<<<<<<<<<<
   Mark C("Workshop");
   cout << A << endl;
   cout << B << endl;
   cout << C << endl;
   C = A;
   cout << A << endl;
   cout << B << endl;
   cout << C << endl;
   return 0;
}

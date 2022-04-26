#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   Mark A("Test", 10, 15);  // init
   Mark B("Test", 10, 15);  // init
   Mark& R = A;
   R = A;
   cout << A << endl;
   return 0;
}

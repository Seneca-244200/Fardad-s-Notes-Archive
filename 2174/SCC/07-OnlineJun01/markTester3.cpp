#include <iostream>
#include "Mark.h"

using namespace std;
using namespace sict;


int main() {
   double val = 92.5;
   Mark M = val; // initialization.
   M.display();
   cout << endl;
   M.displayType(DSP_GRADE);
   M.display();
   cout << endl;
   return 0;
}
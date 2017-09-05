#include <iostream>
#include "Mark.h"

using namespace std;
using namespace sict;


int main() {
   Mark M(77);
   M.display();
   cout << endl;
   M.displayType(DSP_GRADE);
   M.display();
   cout << endl;
   return 0;
}
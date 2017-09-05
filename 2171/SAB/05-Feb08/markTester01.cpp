#include <iostream>
#include "Mark.h"
using namespace sict;
using namespace std;
int main() {
   Mark M, N(80, 60);
   M.display()<< endl;
   N.display()<< endl;
   M.maxPoints(100);
   M.points(72);
   M.displayType(DSP_GRADE);
   M.display() << endl;
   return 0;
}
#include <iostream>
#include "Mark.h"
using namespace sict;
using namespace std;
int main() {
   //int i;
   //int* p = &i;
   // p is address of i
   // *p is the i itself
   Mark M, N(80, 60);

//   if (!M.isValid()) {
   if (!M) {
         cout << "M is not set yet!" << endl;
   }

   M.display()<< endl;
   N.display()<< endl;
   M.maxPoints(100).points(72).displayType(DSP_GRADE).display() << endl;
//   if (M.operator>(N)) {
   if (M > N) {
         M.display() << " is greater than ";
      N.display() << endl;
   }
   else {
      N.display() << " is greater than ";
      M.display() << endl;
   }
   return 0;
}
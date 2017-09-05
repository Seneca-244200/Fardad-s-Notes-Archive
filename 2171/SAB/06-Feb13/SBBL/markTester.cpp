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
   double val;
   int sum, ival;
//   if (!M.isValid()) {
   if (!M) {
         cout << "M is not set yet!" << endl;
   }

   M.display()<< endl;
   N.display()<< endl;
   M.maxPoints(100).points(72.5).displayType(DSP_GRADE).display() << endl;
//   if (M.operator>(N)) {
   if (M > N) {
         M.display() << " is greater than ";
      N.display() << endl;
   }
   else {
      N.display() << " is greater than ";
      M.display() << endl;
   }
//   if (M.operator<(0.5)) {
   if (M < 0.5) {
      cout << "Failed!" << endl;
   }
   // (M is 55.5 / 100)
   M.displayType(DSP_MARK);
   N.displayType(DSP_MARK);
   cout << "M: ";
   M.display() << endl;
   cout << "N: ";
   N.display() << endl;
   N = M++;
   cout << "M: ";
   M.display() << endl;
   cout << "N: ";
   N.display() << endl;
   N = ++M;
   cout << "M: ";
   M.display() << endl;
   cout << "N: ";
   N.display() << endl;
   val = double(M);
   cout << val << endl;
   ival = 24;
   sum = ival + N;

   cout << sum << endl;

   cout << M << endl;

   return 0;
}
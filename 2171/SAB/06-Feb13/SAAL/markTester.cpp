#include <iostream>
#include "Mark.h"
using namespace sict;
using namespace std;
int main() {
   //int i;
   //int* p = &i;
   // p is address of i
   // *p is the i itself
   Mark M, N(80, 60), K;

   double val = 2.5, sum;

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
   if (M < 0.5) {
      cout << "failed!" << endl;
   }
   M.displayType(DSP_MARK);
   M.display() << endl;
   N = M += 3;

   M.display() << endl;
   N.display() << endl;
   N = ++M;
   M.display() << endl;
   N.display() << endl;
   N = M++;
   M.display() << endl;
   N.display() << endl;
   K = N + M;

   val = (double)N;

   N = val + M;

   cout << sum << endl;

   return 0;
}
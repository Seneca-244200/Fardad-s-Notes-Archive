#include <iostream>
using namespace std;
int main() {
   int a[13] = { 1,3,0,4,5,0,8,76,9,0,4,0,0 };
   int i;
   int nonZero = 0;
   for (i = 0; i < 13; i++) {
      nonZero += !!a[i];
      //    walking value 76
      //      nonZero += !!76;
      //      nonZero += !0;
      //      nonZero += 1;
      //    walking value 0
      //      nonZero += !!0;
      //      nonZero += !1;
      //      nonZero += 0;
   }
   cout <<
      "Number of nonzeros in a is: "
      << nonZero
      << endl;
   return 0;
}
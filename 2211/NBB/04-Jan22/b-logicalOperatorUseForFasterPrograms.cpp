#include <iostream>
using namespace std;

int main() {
   int a[16] = { 1,3,0,4,15,0,8,76,9,0,4,0,0,20,0,50 };
   int i;
   int nonZero = 0;
   for (i = 0; i < 16; i++) {
      //nonZero += (a[i] != 0);
      nonZero += !!a[i];
   }
   cout <<
      "Number of nonzeros in a is: "
      << nonZero
      << endl;

   return 0;
}
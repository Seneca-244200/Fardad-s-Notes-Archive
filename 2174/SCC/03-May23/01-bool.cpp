#include <iostream>
using namespace std;
int main() {
   int a = 10;
   int b = 20;
   int c[11] = { 1,4,0,8,0,7,5,0,67,9,0 };
   int numZero = 0;
   int i;
   bool res = (a == b);
   cout << (a > b) << endl;
   cout << (a < b) << endl;
   cout << res << endl;
   cout << !a << endl;
   cout << !!a << endl;
   for (i = 0; i < 11; i++) {
      if (c[i] == 0) {
         numZero++;
      }
   }
   cout << "Number of zeros in the C array: " << numZero << endl;
   for (numZero = 0, i = 0; i < 11; numZero += !c[i++]);
   cout << "Number of zeros in the C array: " << numZero << endl;
   return 0;
}
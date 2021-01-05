#include <iostream>
using namespace std;
int main() {
   int a[13] = { 1,3,0,4,5,0,8,76,9,0,4,0,0 };
   int i;
   int nonZero = 0;
   for (i = 0; i < 13; i++) {
      a[i] && (nonZero += 1);
   }
   cout << 
       "Number of nonzeros in a is: " 
      << nonZero 
      << endl;
   return 0;
}
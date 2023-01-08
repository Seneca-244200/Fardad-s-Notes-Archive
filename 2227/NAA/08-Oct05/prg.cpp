
#include <iostream>
#include <iostream>
#include "Num.h"
using namespace std;
using namespace sdds;
int main() {
   Num a = 10;
   Num b;
   int c = 10;
   int d;
   b = a + c;
   cout << b << " = " << a << " + " << c << endl;

   b = a += c;
   cout << b << " = " << a << " += " << c << endl;

   b >> d;
   
   cout << b << " >> " << d << endl;

   b = c + a;

   cout << b << " = " << c << " + " << a << endl;

   if (!b) {
      cout << b << " is not zero!" << endl;
   }
   else {
      cout << b < " is zero!" << endl;
   }

   return 0;
}
#include <iostream>
#include "ValidatedInt.h"
using namespace std;
using namespace seneca;

int main() {
   cout << "OOP244 NAA - Feb04" << endl;
   ValidatedInt def, X;
   ValidatedInt v1("Jar", 0, 10, 100), v2("Vase", 10, 20, 100);

   X = v1 + v2;
// X = v1.operator+(v2);

   X.display();
   def = -X;
// def = X.operator-();
   def.display();
   def = ++X;
   X.display();
   def.display();
   def = X++;
   X.display();
   def.display();
   return 0;
}
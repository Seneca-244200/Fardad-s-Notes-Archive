#include <iostream>
using namespace std;
#include "DynNum.h"

int main() {
   DynNum B = 2; 
   DynNum C = 3;
   DynNum A;

   A = B + C;

   cout << A << " = " << B << " + " << C << endl;

   C = 10 + B;

   cout << C << " = " << 10 << " + " << B << endl;

   return 0;
}
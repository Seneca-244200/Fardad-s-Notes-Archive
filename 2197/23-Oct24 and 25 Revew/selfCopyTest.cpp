#include <iostream>
using namespace std;
#include "DynNum.h"

int main() {
   DynNum B = 2; 
   DynNum C = 3;
   DynNum& R = B;
   DynNum A;
   cout << "Enter a value for a DynNum: ";
   cin >> R;
   cout << B << endl;

   R = B;

   cout << R << endl;

   return 0;
}
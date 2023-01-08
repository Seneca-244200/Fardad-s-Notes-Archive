#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

#include "Num.h"
using namespace std;
using namespace sdds;
int main() {
   int a = 10;
   Num N = 200;
   Num M = 100;
   Num S;
   Num Z;
   Z = N + a;
   Z = N + M;
   S = a + Z;

   double d = 234.345;

   cout << int(d) << endl;

   cout << int(S) << endl;

   ~S << endl; // operator~ prints the object.



   if (S) {
      ~S << " is  positive!" << endl;
   }
   else {
      ~S << " is nagative!" << endl;
   }

   S = -100;

   if (S) {
      ~S << " is positive!" << endl;
   }
   else {
      ~S << " is negative!" << endl;
   }

   return 0;
}
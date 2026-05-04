#include <iostream>
#include "ValidatedInt.h"
using namespace std;
using namespace seneca;
int main() {
   cout << "OOP244 NBB - Feb 02" << endl;
   ValidatedInt v("Number", 20, 10, 50);
   int val;
   double d = 123.45;
//   val = (int)d;
   val = d;
   cout << "double to int: " << val << endl;
//   val = (int)v;
   val = v;
   cout << "ValidatedInt to int: " << val << endl;
   for (size_t i = 0; i < 6; i++) {
      cout << v[i] << " ";
   }
   cout << endl;
   return 0;
}
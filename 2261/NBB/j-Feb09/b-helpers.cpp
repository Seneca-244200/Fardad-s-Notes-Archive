#include <iostream>
#include "ValidatedInt.h"
using namespace std;
using namespace seneca;
int main() {
   cout << "OOP244 NBB - Feb 09" << endl;
   ValidatedInt v("Number", 20, 10, 50), x, y;
   int val;

   val = 5 + v;
   // val = operator+(5 , v);

   cout << "val: " << val << endl;

   val = 30 - v;

   return 0;
}
#include <iostream>
#include "ValidatedInt.h"
using namespace std;
using namespace seneca;
int main() {
   ValidatedInt s;
   cout << "OOP244 NBB - Feb 02" << endl;
   ValidatedInt v("Number", 20, 10, 50);
   v.display();
//   v.add(5);
   v += 5;
   v.operator+=(5);
   v.display();
   v.operator-=(10);
   v -= 10;
   v.display();
   s = v - 5;
   // s = v.operator-(5);
   return 0;
}
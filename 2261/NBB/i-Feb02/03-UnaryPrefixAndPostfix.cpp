#include <iostream>
#include "ValidatedInt.h"
using namespace std;
using namespace seneca;
int main() {
   ValidatedInt s;
   cout << "OOP244 NBB - Feb 02" << endl;
   ValidatedInt v("Number", 20, 10, 50);
   v.display();
   s.display();
   s = ++v;
   v.display();
   s.display();
   s = v++;
   v.display();
   s.display();

   return 0;
}
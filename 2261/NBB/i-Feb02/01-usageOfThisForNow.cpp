#include <iostream>
#include "ValidatedInt.h"
using namespace std;
using namespace seneca;
int main() {
   cout << "OOP244 NBB - Feb 02" << endl;
   ValidatedInt v("Number", 20, 10, 50);
   int val;
   v.display();
   val = v.setValue(40).display().getValue();

   v.add(5);
   v.display();
   v.operator-=(10);
   v.display();
   return 0;
}
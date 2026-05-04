#include <iostream>
#include "ValidatedInt.h"
using namespace std;
using namespace seneca;
int main() {
   cout << "OOP244 NBB - Feb 09" << endl;
   ValidatedInt v("Number", 20, 10, 50), x, y;

   x.read();
   x.display();
   ~x;
   x.operator~();
   //x.operator~()


   //y = x + v;
   //y = x += v;



   // y = x.operator/( v);
   // y = x.operator+( v);

   // y = --x;
   // y = x.operator--();
   // y = x--;
   // y = x.operator--(int);
  


   return 0;
}
#include <iostream>
#include "Container.h"
using namespace std;

int main() {
   Container C, D(250, 50), E, F;
   int val = 20;
   int total = 0;
   double d;
   d = (double)val;
   C.display() << endl;
//   C.addTo(100);
   C += 100;
   C.display() << endl;
   total = val += C;
   cout <<"total: " << total << ", val:" <<  val << endl;
   d = (double)C;
   cout << "Container C is " << d << " full!" << endl;
   E = C + D;
   E.display() << endl;
   C = E - D;
   if (!F) {
      cout << "Container is emtpy" << endl;
   }
   if(!D) {
      cout << "Container is emtpy" << endl;
   }
   else {
      cout << "Container is not empty" << endl;
   }
   E = ++C;
   C.display() << endl;
   E.display() << endl;
   E = C++;
   C.display() << endl;
   E.display() << endl;
   return 0;
}
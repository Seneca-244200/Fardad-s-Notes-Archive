#include <iostream>
#include "Container.h"
using namespace std;

int main() {
   int avcnt = 20;
   int res;
   Container C, D(250, 50), E, F, G;
   C.display() << endl;
   D.display() << endl;
   C.addTo(100);
   D.addTo(75);
   C.display() << endl;
   D.display() << endl;

   E = D += 50; // <<<<---------

   D.display() << endl;
   E.display() << endl;

   res = avcnt += D;

   cout << "Available contenet: " << avcnt << endl;

   cout << "the container is " << (double)D << " full!" << endl;

 //  F = D.operator+( C);// potato
   F = D + C; // potaato
   F.display() << endl;

   F = D - C;

   if (!G) {
      cout << "Container is empty!" << endl;
   }

   D.display() << endl;
   ++D;
   D.display() << endl;
   D++;
   D.display() << endl;
   // D has the value 177;
   F = D++;
   D.display() << endl;
   F.display() << endl;

   return 0;
}
#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   Container C(250, 100), D(330, 30), E;
   C.display() << endl;
   D.display() << endl;
   E = D = C += 50;
   cout << "C: ";
   C.display() << endl;
   cout << "D: ";
   D.display() << endl;
   cout << "E: ";
   E.display() << endl;

   C += 150;
   C.display() << endl;
   E = C + D;
   cout << "E: ";
   E.display() << endl;
   --E;
   cout << "E: ";
   E.display() << endl;
   ++E;
   cout << "E: ";
   E.display() << endl;
   ~E; // empty the container;
   cout << "E: ";
   E.display() << endl;
   if (!E) {
      cout << "the container is empty" << endl;
   }
 // this DOES simulate the postfix ++ 
 // as integers in C
   D = E++;
   cout << "E: ";
   E.display() << endl;
   cout << "D: ";
   D.display() << endl;
   // this does not simulate the postfix -- 
   // as integers in C
   D = E--;
   cout << "E: ";
   E.display() << endl;
   cout << "D: ";
   D.display() << endl;

   return 0;
}
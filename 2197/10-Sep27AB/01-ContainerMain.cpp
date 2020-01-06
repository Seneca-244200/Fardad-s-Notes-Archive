#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {
   Container C;
   //Container B = 25;
   Container B(25);
   cout << "AAAAAAAAAAAAAAAAA:" << endl;
   C.display() << endl;
   C.set(50);
   C.display() << endl;
   cout << "BBBBBBBBBBBBBBBBBBBb: " << endl;
   for (int i(0); i < 5; i++) {
      B.display() << endl;
   }
   return 0;
}
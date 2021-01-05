#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   Container C(250, 100)
      ,D(100),
      E(200, 25);
   cout << "C: ";
   C.display() << endl;
   cout << "D: ";
   D.display() << endl;
   cout << "E: ";
   E.display() << endl;
   D = C += 50;
   cout << "C: ";
   C.display() << endl;
   cout << "D: ";
   D.display() << endl;
   E += C;
   cout << "C: ";
   C.display() << endl;
   cout << "E: ";
   E.display() << endl;
   return 0;
}
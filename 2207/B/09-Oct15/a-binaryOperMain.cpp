#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   Container D("D", 120, 150),
      E("E"),
      F("F",130);
   D.display() << endl;
   E.display() << endl;
   F.display() << endl;
   E = D += 25;
   D.display() << endl;
   E.display() << endl;
   cout << "Before F = E + D;" << endl;
   D.display() << endl;
   E.display() << endl;
   F.display() << endl;
   F = E + D;
   cout << "After F = E + D;" << endl;
   D.display() << endl;
   E.display() << endl;
   F.display() << endl;
   return 0;
}
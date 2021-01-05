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
   if (!E) {
      cout << "E is empty, lets pour D into it" << endl;
      E = ++D;
   }
   D.display() << endl;
   E.display() << endl;
   E = D++;
   D.display() << endl;
   E.display() << endl;
   E = D--;
   D.display() << endl;
   E.display() << endl;
   return 0;
}
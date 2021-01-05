#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
void show(const char* prompt, const Container& C) {
   cout << prompt;
   C.display() << endl;
}
int main() {
   Container C(250, 100)
      ,D(100),
      E(200, 25);
   if (!C) {
      cout << "C is empty" << endl;
   }
   else {
      show("C:", C);
   }
   if (!D) {
      cout << "D is empty" << endl;
   }
   show("D:", D);
   show("E:", E);
   E = ++D;
   show("D:", D);
   show("E:", E);
   E += --C;
   show("C:", C);
   show("E:", E);
   return 0;
}
#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
void show(const char* prompt, const Container& C) {
   cout << prompt;
   C.display() << endl;
}
int main() {
   Container D(100),
      E(200, 25);
   ++D;
   show("D: ", D);
   E = D++;
   show("D: ", D);
   show("E: ", E);
   E = D--;
   show("D: ", D);
   show("E: ", E);
   return 0;
}
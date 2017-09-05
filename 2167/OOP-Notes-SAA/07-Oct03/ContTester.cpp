#include <iostream>
using namespace std;
#include "Container.h"

void dspContainers(const Container* C, int number) {
   for (int i = 0;i < number;i++) {
      C[i].display();
   }
}
int main() {
   Container C;
   Container D("Milk", 250);
   Container E(500);
   Container F = 400;
   cout << endl << endl;
   int i(5);
   C.display();
   D.display();
   E.display();
   F.display();
   F.add(100);
   cout << i << endl;
   i = E.remove(20);
   cout << "==================================" << endl;
   F.returnMe().display();
   cout << "==================================" << endl;
   return 0;
}
#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
void dispContainters(const Container* cp, int size) {
   for (int i(0); i < size; i++) {
      cp[i].display() << " ";
   }
   cout << endl;
}
int main() {
   Container C[3];
   dispContainters(C, 3);
   return 0;
}
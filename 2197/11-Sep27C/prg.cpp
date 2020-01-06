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
   Container A(20, 40);
   Container B = Container(50, 100);
   Container C[3] = { 10, 20, Container(40, 400) };
   dispContainters(C, 3);
   return 0;
}
#include <iostream>

using namespace std;
#include "cat.h"
using namespace sict;
void act(Animal& a) {
  a.act();
  a.move();
}
int main() {
  Cat C("TOM");
  Animal* ap = new Cat("Fluffy");
  cout << "------------Using Animal pointer: " << endl;
  ap->act();
  ap->move();
  ap->sound();
  cout << "------------End of main" << endl;
  delete ap;
  act(C);
  return 0;
}
#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
using namespace sict;
int main() {

  Animal* ap = new Cat("Tom");
  cout << "------------Using Animal pointer: " << endl;
  ap->act();
  ap->move();
  ap->sound();
  delete ap;
  cout << "------------End of main" << endl;
  return 0;
}
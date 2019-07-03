#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
using namespace sict;
int main(){
  int* p = new int(3);
  Cat* c = new Cat("Fluffy");
  Animal* ap = new Cat("Tom");
  Animal& ar = *ap;
  cout << "------------Using Animal pointer: " << endl;
  c->act();
  c->move();
  c->sound();

  cout << "------------Using Animal reference: " << endl;
  ar.act();
  ar.move();
  ar.sound();
  cout << "------------Using Animal pointer: " << endl;
  ap->act();
  ap->move();
  ap->sound();
  delete c;
  delete ap; !
  cout << "------------End of main" << endl;
  return 0;
}

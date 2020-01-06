#include <iostream>
using namespace std;
#include "cat.h"
using namespace sdds;
int main() {
  Cat p("Pepper");
  Cat* c = new Cat("Fluffy");
  Animal* ap = new Cat("Tom");
  Animal& ar = p;
  //Animal A("Jerry"); // Error, Animal is abstract (has at least one pure virutal method)
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
  delete ap;
  cout << "------------End of main" << endl;
  return 0;
}
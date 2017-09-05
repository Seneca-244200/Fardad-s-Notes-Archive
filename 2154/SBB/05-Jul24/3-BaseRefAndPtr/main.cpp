#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
using namespace oop244;
int main(){
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
  delete ap; // only the animal is deleted, oops!!!
  cout << "------------End of main" << endl;
  return 0;
}

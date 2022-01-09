#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
using namespace sdds;
int main(){
   sdds::debug = true;
  Cat p("Pepper"); // Cat in a Cat's ref
  Cat* c = new Cat("Fluffy"); // Cat in a Cat's pointer
  Animal* ap = new Cat("Tom");  // Cat in an Animal pointer
  Animal& ar = p;    // Already existing Cat refered to by an Animal reference 
  cout << "------------Using Cat ref: " << endl;
  p.act();
  p.move();
  p.sound();
  cout << "------------Using cat pointer: " << endl;
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

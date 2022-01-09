#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
using namespace sdds;
int main(){
   sdds::debug = true;
  Cat p("Pepper");
  Cat* c = new Cat("Fluffy");
  // animal pointer and reference
  Animal* ap = new Cat("Tom");
  Animal& ar = p;
  cout << "------------Using Cat ref: " << endl;
  p.act();
  p.move();
  p.sound();
  p.play();
  cout << "------------Using cat pointer: " << endl;
  c->act();
  c->move();
  c->sound();
  c->play();
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

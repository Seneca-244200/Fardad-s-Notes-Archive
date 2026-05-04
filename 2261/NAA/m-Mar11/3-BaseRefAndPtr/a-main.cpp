#include <iostream>
using namespace std;
#include "cat.h"
using namespace sdds;
int main(){
   sdds::debug = true;
  Cat p("Pepper");
  Cat* c = new Cat("Fluffy");
  // animal pointer and reference
  Animal* ap = new Cat("Tom");
  Animal* aptr2 = c;
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
  cout << "------------Deleting a cat pointed by a cat ptr" << endl;
  delete c; 
  cout << "------------Deleting a cat pointed by an animal ptr" << endl;
  delete ap; 
  cout << "Cat part is not deleted and is a leak!" << endl;
  cout << "------------End of main" << endl;
  return 0;
}

#include <iostream>
using namespace std;
#include "cat.h"
using namespace sdds;
int main(){
   sdds::debug = true;
  Cat p("Pepper");
  Animal* ap = new Cat("Tom");
  Animal& ar = p;
  Animal A("Simba");
  cout << "------------Using Cat reference: " << endl;
  p.act();
  p.move();
  p.sound();
  cout << "------------Using Animal reference: " << endl;
  ar.act();
  ar.move();
  ar.sound();
  cout << "------------Using Animal pointer: " << endl;
  ap->act();
  ap->move();
  ap->sound();
  cout << "------------Deleting a cat pointed by an animal ptr" << endl;
  delete ap; 
  cout << "Cat part is not deleted and is a leak!" << endl;
  cout << "------------End of main" << endl;
  return 0;
}

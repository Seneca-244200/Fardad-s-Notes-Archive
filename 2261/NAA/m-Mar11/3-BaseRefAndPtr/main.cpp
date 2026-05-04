#include <iostream>
using namespace std;
#include "Utils.h"
#include "cat.h"
using namespace seneca;
int main(){
   seneca::debug = true;
  Cat p("Pepper");
  Animal* ap = new Cat("Tom");
  Cat* cp = new Cat("Marty");
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
  cout << "------------Using Cat pointer: " << endl;
  cp->act();
  cp->move();
  cp->sound();
  cout << "------------Using Animal pointer: " << endl;
  ap->act();
  ap->move();
  ap->sound();
  cout << "------------Deleting a cat pointed by a cat ptr" << endl;
  delete cp;
  cout << "end delete--------------------" << endl;
  cout << "------------Deleting a cat pointed by an animal ptr" << endl;
  delete ap;
  cout << "end delete--------------------" << endl;
  cout << "Cat part is not deleted and is a leak!" << endl;
  cout << "------------End of main" << endl;
  return 0;
}

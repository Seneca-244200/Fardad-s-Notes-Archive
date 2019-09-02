#include <iostream>
#include <cstring>
using namespace std;
#include "Animal.h"
#include "cat.h"
using namespace sict;
int main() {
  //Pet A;      //    will cause error because of abstract base class
  Cat C("Fluffy");
  Animal& ar = C;
  Animal* ap = &C;
  /*cout << "------------No Cat, jut Pet reference: " << endl;
   A.act();
   A.move();
   A.sound();   //           will cause error because of abstract base class */
  cout << "------------Using Cat reference: " << endl;
  C.act();
  C.move();
  C.sound();
  cout << "------------Using Pet reference: " << endl;
  ar.act();
  ar.move();
  ar.sound();
  cout << "------------Using Pet pointer: " << endl;
  ap->act();
  ap->move();
  ap->sound();
  cout << "------------Using Pet pointer array of cats: " << endl;
  Pet* p[3] = { new Cat("Jack"), new Cat("Joe"), new Cat("Jill") };
  int i;
  for (i = 0; i < 3; i++) {
    p[i]->act();
  }
  for (i = 0; i < 3; delete p[i++]);
  cout << "------------End of main" << endl;
  return 0;
}
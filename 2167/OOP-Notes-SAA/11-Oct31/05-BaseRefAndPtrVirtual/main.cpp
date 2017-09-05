#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
using namespace ict;
int main(){
  Animal A;
  Cat C("Fluffy");
  Animal& ar = C;
  Animal* ap = &C;
  cout << "------------No Cat, jut Animal reference: " << endl;
  A.act();
  A.move();
  A.sound();
  cout << "------------Using Cat reference: " << endl;
  C.act();
  C.move();
  C.sound();
  cout << "------------Using Animal reference: " << endl;
  ar.act();
  ar.move();
  ar.sound();
  cout << "------------Using Animal pointer: " << endl;
  ap->act();
  ap->move();
  ap->sound();
  cout << "------------End of main" << endl;
  return 0;
}

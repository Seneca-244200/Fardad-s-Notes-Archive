#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
using namespace ict;
int main() {

   Cat C("Fluffy");
   Animal& ar = C;
   Animal* ap = &C;
   cout << "------------Using Cat reference: " << endl;
   cout << C.name() << endl;
   C.act();
   C.move();
   C.sound();
   cout << "------------Using Animal reference: " << endl;
   cout << ar.name() << endl;
   ar.act();
   ar.move();
   ar.sound();
   cout << "------------Using Animal pointer: " << endl;
   cout << ap->name() << endl;
   ap->act();
   ap->move();
   ap->sound();
   cout << "------------End of main" << endl;

   return 0;
}

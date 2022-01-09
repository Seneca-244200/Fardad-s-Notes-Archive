#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
using namespace sdds;
int main() {
   sdds::debug = true;

   // virtuality comes to play only if reference or pointer of a Base class is refering or pointing to a Derivied class.
   // if this is not the case, ingore all the virtuals, they don't do anything....
   Animal A("Rat");
   Cat p("Pepper");
   Cat* c = new Cat("Fluffy");
   Animal* ap = new Cat("Tom");
   Animal& ar = p;
   cout << "------------Refering to Animal by an Animal" << endl;
   A.act();
   A.move();
   A.sound();
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

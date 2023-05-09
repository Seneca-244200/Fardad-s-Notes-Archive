#include <iostream>
#include "cat.h"
using namespace std;
using namespace sdds;
int main() {
   sdds::debug = true;

   // virtuality comes to play only if reference or pointer of a Base(patent) class 
   // is refering or pointing to a Derivied(child) class.
   // if this is not the case, ingore all the virtuals, they don't do anything....
   Animal A("Rat");
   Cat p("Pepper");
   Cat* c = new Cat("Fluffy");
   Animal* ap = new Cat("Tom");
   Animal& ar = p;
   cout << "------------Animal object no inheritance: " << endl;
   A.act();
   A.move();
   A.sound();
   cout << "------------Using Animal reference: " << endl;
   ar.act();
   ar.Animal::act();
   ar.move();
   ar.sound();
   cout << "------------Using Animal pointer: " << endl;
   ap->act();
   ap->move();
   ap->sound();
   ap->Animal::sound();
   delete c;
   delete ap;
   cout << "------------End of main" << endl;
   return 0;
}

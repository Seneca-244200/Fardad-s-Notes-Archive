#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
using namespace sdds;
int main() {
   sdds::debug = true;
   Animal* p = new Animal("Samba");
   Cat C("Pepper");
   Animal* ap = new Cat("Tom");
   Animal& ar = C;
   cout << "------------Using Animal reference: " << endl;
   ar.act();
   ar.move();
   ar.sound();
   cout << "------------Using Animal pointer: " << endl;
   ap->act();
   ap->move();
   ap->sound();
   delete ap;
   cout << "------------Using Animal pointer to point to an Animal " << endl;
   p->act();
   p->move();
   p->sound();
   delete p;
   cout << "------------End of main" << endl;
   return 0;
}

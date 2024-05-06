#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
using namespace sdds;
int main() {
   sdds::debug = true;
   // Animal A;      //    will cause error because of abstract base class
   Cat C("Fluffy");
   Animal& ar = C;
   Animal* ap = &C;
   /*cout << "------------No Cat, jut Animal reference: " << endl;
    A.act();
    A.move();
    A.sound();   //           will cause error because of abstract base class */
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
   cout << "------------Using Animal pointer array of cats: " << endl;
   Animal* p[3] = { new Cat("Jack"), new Cat("Joe"), new Cat("Jill") };
   int i;
   for (i = 0; i < 3; i++) {
      p[i]->act();
   }
   for (i = 0; i < 3; delete p[i++]);
   cout << "------------End of main" << endl;
   return 0;
}

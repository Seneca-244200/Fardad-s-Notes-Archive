#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
using namespace sdds;
int main() {
   sdds::debug = true;
   Animal A("Rat");
   Cat p("Pepper");
   Animal* ap = new Cat("Tom");
   Animal& ar = p;
   cout << "------------Refering to Animal by an Animal" << endl;
   A.act();
   A.move();
   A.sound();
   cout << "------------Using Animal reference: " << endl;
   ar.act();
   ar.move();
   ar.sound();
   cout << "------------Using Animal pointer: " << endl;
   ap->act();
   ap->move();
   ap->sound();
   delete ap;
   cout << "------------End of main" << endl;
   return 0;
}

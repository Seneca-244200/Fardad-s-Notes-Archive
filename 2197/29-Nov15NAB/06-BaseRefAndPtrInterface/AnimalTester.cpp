#include <iostream>
using namespace std;
#include "cat.h"
#include "Feral.h"
#include "Pet.h"
using namespace sdds;
int main() {
   Animal* p[3] = { new Feral(123), new Pet("Fluffy"), new Cat("Tom") };
   int i;
   for (i = 0; i < 3; i++) {
      p[i]->act();
      p[i]->sound();
   }
   for (i = 0; i < 3; i++) {
      delete p[i];
   }
   return 0;
}

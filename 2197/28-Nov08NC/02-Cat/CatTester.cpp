#include <iostream>
#include "Animal.h"
#include "Cat.h"
using namespace sdds;
using namespace std;
int main() {
   Cat A = "Fluffy";
   Animal& Ar = A;
   Animal* p = &A;
   if (A) {
      cout << A << " is here" << endl;
      A.sound();
      A.act();
      A.move();
      cout << "--------------------------------------" << endl;
      Ar.act();
      p->move();
   //   Ar.sound(); Child's method can not be called using parents Reference or pointer

   }
   else {
      cout << "Animal is empty" << endl;
   }

   return 0;
}
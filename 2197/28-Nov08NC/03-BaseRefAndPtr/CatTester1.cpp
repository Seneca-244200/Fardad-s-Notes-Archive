#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Cat.h"
using namespace sdds;
using namespace std;
int main() {
   Cat C("TOM");
   Animal A("Jerry");
   Animal* p[2] = { &C, &A };
   int i;
   for (i = 0; i < 2; i++) {
      p[i]->act();
      p[i]->move();
      p[i]->sound();
   }
   return 0;
}
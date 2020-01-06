#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Cat.h"
using namespace sdds;
using namespace std;
int main() {

   Animal* p[2] = { new Cat("Tom"), new Animal("Jerry") };
   int i;
   for (i = 0; i < 2; i++) {
      p[i]->act();
      p[i]->sound();
   }
   for (i = 0; i < 2; i++) {
      delete p[i];
   }
   return 0;
}
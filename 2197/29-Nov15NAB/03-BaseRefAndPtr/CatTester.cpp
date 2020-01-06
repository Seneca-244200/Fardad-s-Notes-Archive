#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Cat.h"
using namespace sdds;
using namespace std;
int main() {
   
   Animal* ptr[2] = { new Animal("Snake"), new Cat("Garfield") };
   int i;
   for (i = 0; i < 2; i++) {
      ptr[i]->sound();
      ptr[i]->act();
   }
   for (i = 0; i < 2; i++) {
      delete ptr[i];
   }

   return 0;
}
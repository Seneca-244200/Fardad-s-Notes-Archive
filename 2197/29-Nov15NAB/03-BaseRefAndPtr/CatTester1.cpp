#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Cat.h"
using namespace sdds;
using namespace std;
int main() {
   Cat C;
   Animal A = "Snake";
   Animal* ptr[2] = { &A, &C };
   for (int i = 0; i < 2; i++) {
      ptr[i]->sound();
      ptr[i]->act();
   }
   return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Cat.h"
using namespace sdds;
using namespace std;
int main() {
   char str[81];
   Cat A;
   Animal& B = A;
   if (A) {
      cout << A << " is here" << endl;
      A.act();
      A.move();
      A.sound();
      strcpy(str, A);
      cout << "str is a copy of " << str << endl;
   }
   else {
      cout << "Animal is empty" << endl;
   }
   if (B) {
      cout << B << " is here" << endl;
   //   B.act();  Animal does not know how to act
   //   B.move(); // animal cant more by others except the children
      B.sound();
      strcpy(str, B);
      cout << "str is a copy of " << str << endl;
   }
   else {
      cout << "Animal is empty" << endl;
   }
   return 0;
}
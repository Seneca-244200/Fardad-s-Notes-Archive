#include <iostream>
#include "Name.h"
using namespace sdds;
using namespace std;
void foo() {
   Name N[3];
   N->setName("First");
   (N + 1)->setName("Sedond");
   (N + 2)->setName("Third");
   for (int i = 0; i < 3; i++) {
      N[i].print() << endl;
   }
}

int main() {
   char thename[71];
   cout << "What is your name? ";
   cin.getline(thename, 70);
   Name* nptr = new Name;
   //nptr->setName(thename);
   nptr[0].setName(thename);
   cout << "Hello ";
   nptr->print() << endl;
   delete nptr;
   foo();
   cout << "Good bye!" << endl;
   return 0;
}
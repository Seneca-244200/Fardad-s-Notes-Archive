#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {
   Container C(100, 150);
   Container D;
   Container E(200, 230);
   Container tooMuch(1000, 500);
   cout << "Before operatation" << endl;
   C.display(cout << "C: ") << endl;
   D.display(cout << "D: ") << endl;

   cout << "D = ++C" << endl;
   D = ++C; // C.operator++();

   cout << "After operation" << endl;
   C.display(cout << "C: ") << endl;
   D.display(cout << "D: ") << endl;

   return 0;
}
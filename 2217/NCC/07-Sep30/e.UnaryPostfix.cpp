#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {
   Container A(100, 150);
   Container B;
   cout << "Before operatation" << endl;
   A.display(cout << "A: ") << endl;
   B.display(cout << "B: ") << endl;

   cout << "B = A++" << endl;
   B = A++; // A.operator++(int);

   cout << "After operation" << endl;
   A.display(cout << "A: ") << endl;
   B.display(cout << "B: ") << endl;

   return 0;
}
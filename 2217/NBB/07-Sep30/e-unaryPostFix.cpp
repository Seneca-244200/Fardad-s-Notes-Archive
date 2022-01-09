#include <iostream>
#include "Container.h"
using namespace std;

using namespace sdds;

int main() {
   //int a = 5;
   //int b = 0;
   //b = a++;

   //cout << b << " " << a << endl;
   //// output : 5 6


   Container A(5, 300);
   Container B;

   A.display(cout << "A: ") << endl;
   B.display(cout << "B: ") << endl;

   B = A++; // C.operator++(int);

   A.display(cout << "A: ") << endl;
   B.display(cout << "B: ") << endl;
   return 0;
}

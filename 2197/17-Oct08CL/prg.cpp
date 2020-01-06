#include <iostream>
#include "String.h"
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   Container A, B;
   int i = 200;
   int x;
   double d;

   A = Container(i);

   x = int(A);
   d = double(A);
   /*cout << x << endl << d << endl;
   A.display() << endl;*/
   B.display();
   cout << x << endl << d << endl << A<< endl;
   return 0;
}
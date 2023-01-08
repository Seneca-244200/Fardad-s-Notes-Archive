#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int& foo(int& x) {
   return x;
}
int main() {
   int i;
   
   foo(i) = 300;

   cout << endl << endl << i << endl;


   Container X("Gasoline", 155, 220);
   Container Y{ "Oil", 155, 220 };
   Container Z{ "Water" };
   X.display() << endl;
   Y.display() << endl;
   Z.display() << endl;
   return 0;
}
#include <iostream>
using namespace std;
#include "Container.h"
using namespace sdds;
int main() {
   int i;
   Container* carr[12];
   Container* p;
   for ( i = 0; i < 10; i++) {
      carr[i] = new Container();
   }
   p = new Container("Coke", 10, 12);
   carr[10] = p;
   carr[11] = new Container("Beer", 2, 8);

   for (i = 8; i < 12; i++) {
      cout << *carr[i] << endl;
   }


   for (i = 0; i < 12; i++) {
      delete carr[i];
   }
   return 0;
}

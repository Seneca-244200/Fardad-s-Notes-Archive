#include <iostream>
#include "Container.h"
using namespace std;

using namespace sdds;

int main() {
   Container A(123, 300);
                  //A.operator int()const;

   if (!A) {  // A.opetator bool()const;
      cout << "A is empty!" << endl;
   }
   else {
      cout << "A has " << (int)A << " CCs of liquid!" << endl;
   }

   return 0;
}

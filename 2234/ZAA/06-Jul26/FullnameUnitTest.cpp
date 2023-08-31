#include <iostream>
#include "Fullname.h"
using namespace std;
using namespace sdds;
int main( ) {
   Fullname F{ "Fred", "Soley" };
   Fullname Fc = F;
   cout << "Fc object holds: " << F << endl;

   return 0;
}

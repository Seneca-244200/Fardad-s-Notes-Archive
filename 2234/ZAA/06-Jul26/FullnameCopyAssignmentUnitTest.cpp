#include <iostream>
#include "Fullname.h"
using namespace std;
using namespace sdds;
int main( ) {
   Fullname F{ "Fred", "Soley" };
   Fullname H{ "Homer", "Simpson" };
   cout << "F object holds: " <<  F << endl;
   cout << "H object holds: " << H << endl;

   F = H;

   cout << "Now F object holds: " << F << endl;

   return 0;
}

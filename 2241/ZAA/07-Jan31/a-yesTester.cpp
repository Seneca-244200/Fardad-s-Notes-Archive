#include <iostream>
#include "Utils.h"
using namespace std;
using namespace seneca;
int main( ) {
   if ( ut.yes( "Are you ok?\n> " ) ) {
      cout << "Good for you!" << endl;
   }
   else {
      cout << "Sorry to hear that!" << endl;
   }
   return 0;
}
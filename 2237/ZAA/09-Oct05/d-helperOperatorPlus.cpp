#include <iostream>
#include "Double.h"
using namespace std;
using namespace sdds;
int main( ) {
   Double
      e = 100.0,
      f;
   e.print( cout << "e:" ) << endl;
   f.print( cout << "f:" ) << endl;
  f = 123.345 + e;
//   f = operator+( 123.456, e );
   e.print( cout << "e:" ) << endl;
   f.print( cout << "f:" ) << endl;
   return 0;
}


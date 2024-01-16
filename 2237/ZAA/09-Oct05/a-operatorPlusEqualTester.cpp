#include <iostream>
#include "Double.h"
using namespace sdds;
using namespace std;
int main( ) {
   Double
      d = 123.456,
      e = 100.0,
      f;
   d.print( ) << endl;
   f = d += e;
//   f = d.operator+=( e );
//   f = d;
   d.print( ) << endl;
   f.print( ) << endl;
   return 0;
}

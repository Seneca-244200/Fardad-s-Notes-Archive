#include <iostream>
#include "Double.h"
using namespace sdds;
#include <iostream>
#include "Double.h"
using namespace sdds;
using namespace std;
int main( ) {
   Double
      d = 123.456,
      e = 100.0,
      f;
   e.print( cout << "e:" ) << endl;
   d.print( cout << "d:" ) << endl;
   f.print( cout << "f:" ) << endl;
   f = d + e;
   //  f = d.sum( e );
  //   f = d;
   e.print( cout << "e:" ) << endl;
   d.print( cout << "d:" ) << endl;
   f.print( cout << "f:" ) << endl;
   return 0;
}

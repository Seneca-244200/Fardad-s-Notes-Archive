#include <iostream>
#include "Double.h"
using namespace std;
using namespace sdds;
int main( ) {
   Double
      d = 123.456,
      e = 100.0,
      f;
   e.print( cout << "e:" ) << endl;
   d.print( cout << "d:" ) << endl;
   f.print( cout << "f:" ) << endl;
   f = d + e;
   e.print( cout << "e:" ) << endl;
   d.print( cout << "d:" ) << endl;
   f.print( cout << "f:" ) << endl;
   f = d / e;
   //   f = d.operator/(e)
   e.print( cout << "e:" ) << endl;
   d.print( cout << "d:" ) << endl;
   f.print( cout << "f:" ) << endl;
   return 0;
}


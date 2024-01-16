
#include <iostream>
#include "Utils.h"
#include "Integer.h"
using namespace std;
using namespace sdds;
int main( ) {
   Integer
      i = 5, j = 3, k,
      a = 1, b = 2, c;
   i.print( cout << "i: " ) << endl;
   j.print( cout << "j: " ) << endl;
   k.print( cout << "k: " ) << endl;
   //   k = i.operator+=( j );
   k = i += j;
   i.print( cout << "i: " ) << endl;
   j.print( cout << "j: " ) << endl;
   k.print( cout << "k: " ) << endl;
   c = a + b;
   // c = a.operator+(b)
   a.print( cout << "a: " ) << endl;
   b.print( cout << "b: " ) << endl;
   c.print( cout << "c: " ) << endl;

   return 0;
}


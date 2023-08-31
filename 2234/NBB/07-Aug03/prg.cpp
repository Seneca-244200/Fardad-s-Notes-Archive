#include <iostream>
#include "Utils.h"
#include "Array.h"
using namespace sdds;
using namespace std;

int main( ) {
   Array<double, 10> ar;
   Array<int, 5> ir;
   size_t i;
   for ( i = 0; i < ar.size( ); i++ ) {
      ar[i] = (int( i ) + 1) * 10;
   }
   cout << ar << endl;
   for ( i = 0; i < ir.size( ); i++ ) {
      ir[i] = (int( i ) + 1) * 10;
   }
   cout << ir << endl;
   return 0;
}


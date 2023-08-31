#include <iostream>
#include "DoubleArray.h"
using namespace std;
using namespace sdds;
int main( ) {
   DoubleArray d(4);
   for ( size_t i = 0; i < 4; i++ ) {
      d.setElement( i, i * 1.2 );
   }
   for ( size_t j = 0; j < d.size( ); j++ ) {
      cout << d.getElement( j ) << " ";
   }
   cout << endl;
   return 0;
}
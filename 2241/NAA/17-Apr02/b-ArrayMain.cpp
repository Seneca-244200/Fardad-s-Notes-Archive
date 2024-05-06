#include <iostream>
#include "Utils.h" 
#include "Array.h"
using namespace std;

template<typename type>
void prnArray( Array<type> D ) {
   size_t i;
   cout << "printing " << D.size( ) << " elements:\n";
   for ( i = 0; i < D.size( ); i++ ) {
      if ( i ) cout << ",";
      cout << D[i];
   }
   cout << endl;
}

int main( ) {
   Array<double> D( 5 );
   Array<int> I( 10 ), J( 100 );
   size_t i;
   for ( i = 0; i < 7; i++ ) {
      D[i] = (i + 10) * 1.1;
   }
   prnArray( D );
   for ( i = 0; i < 7; i++ ) {
      I[i] = (i + 10);
   }
   J = I;
   prnArray( J );
   return 0;
}
#include <iostream>
#include "Utils.h" 
#include "Array.h"
using namespace std;

template<typename type>
void prnArray( const Array<type>& D ) {
   size_t i;
   cout << "printing " << D.size( ) << " elements:\n";
   for ( i = 0; i < D.size( ); i++ ) {
      if ( i ) cout << ",";
      cout << D[i];
   }
   cout << endl;
}

int main( ) {
   Array<double> D(5);
   Array<int> I(10);
   size_t i;
   for ( i = 0; i < 7; i++ ) {
      D[i] = (i + 10) * 1.1;
   }
   prnArray( D );
   for ( i = 0; i < 7; i++ ) {
      I[i] = (i + 10);
   }
   prnArray( I );
   return 0;
}
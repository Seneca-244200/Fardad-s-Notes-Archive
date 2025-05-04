#include <iostream>
#include "Array.h"
#include "Container.h"

using namespace seneca;
using namespace std;

template <typename type>
void prnArray( const Array<type>& A ) {
   for ( size_t i = 0; i < A.size( ); i++ ) {
      if ( i != 0 ) cout << ", ";
      cout << A[i];
   }
   cout << endl;
}

int main( ) {
   Array<int> A(5);
   Array<Container>  C( 3 );
   Array<double> D( 10 );
   int i=0;
   while ( i < 7 ) {
      A[i++] = i + 10;
   }
   i = 0;
   while ( i < 7 ) {
      C[i++] = (i + 10) *2;
   }
   i = 0;
   while ( i < 15 ) {
      D[i++] = (i + 1.123) * 2;
   }
   prnArray( A );
   prnArray( C );
   cout.setf( ios::fixed );
   cout.precision( 2 );
   prnArray( D );
   return 0;
}
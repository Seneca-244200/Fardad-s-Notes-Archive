#include <iostream>
#include "Utils.h"
#include "Array.h"
using namespace std;
using namespace seneca;


template<typename type>
void displayArray( const Array<type>& D ) {
   for ( size_t i = 0; i < D.size( ); i++ ) {
      if ( i ) cout << ", ";
      cout << D[i];
   }
   cout << endl;
}
int main( ) {
   Array<double> D( 4 );
   Array<int> I(3);
   for ( size_t i = 0; i < 7; i++ ) {
      D[i] = 1.1 * (i + 1);
   }
   D[20] = 20.123;
   for ( size_t i = 0; i < 5; i++ ) {
      I[i] = int(i + 1);
   }
   I[10] = 10;
   displayArray( D );
   displayArray( I );
   return 0;
}
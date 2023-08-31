#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace sdds;

void showArry( const IntArray& ar );

int main( ) {
   IntArray I( 5 );
   cout << I.size( ) << endl;
   size_t i = 0;
   for ( ; i < I.size( ); i++ ) {
      I[i] =  (i + 1) * 10 ;
   }
   I[50] = 400;
//   IntArray J = I, K( 5 );
//   K = J;
   showArry( I );
//   showArry( J );
//   showArry( K );

   return 0;
}

void showArry( const IntArray& ar ) {
   for ( size_t i = 0; i < ar.size( ); i++ ) {
      cout << ar[i];
      if ( i + 1 != ar.size( ) ) cout << ", ";
   }
   cout << endl;
}

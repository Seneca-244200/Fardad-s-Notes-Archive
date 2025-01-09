#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace seneca;

void displayArray( const IntArray& I ) {
   cout << I << " are " << I.size( ) << " values!" << endl;
}

int main( ) {
   IntArray A( 3 );
   IntArray B( 10 );
   int i;
   for ( i = 0; i < 6; i++ ) {
      A[i] = i * 4;
   }
   displayArray( A );
   B = A;
   A[3] = 3000;
   displayArray( A );
   displayArray( B );
   return 0;
}



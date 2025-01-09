#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace seneca;

void displayArray(IntArray I ) {
   cout << I << " are " << I.size( ) << " values!" << endl;
}

int main( ) {
   IntArray A( 3 );
   IntArray B = A;
   IntArray C( A );
   IntArray D{ A };
   int i;
   for ( i = 0; i < 6; i++ ) {
      A[i] = i * 4;
   }
   displayArray( A );//displayArray(IntArray I = A)
   displayArray( B );//displayArray(IntArray I = A)
   displayArray( C );//displayArray(IntArray I = A)
   displayArray( D );//displayArray(IntArray I = A)

   for ( i = 0; i < A.size(); i++ ) {
      cout << A[i] << " ";
   }
   cout << endl;
   return 0;
}



#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace seneca;

void display( const IntArray& I ) {
   for ( size_t i = 0; i < I.size( ); i++ ) {
      cout << I.operator[]( i ) << " ";
   }
   cout << endl;
}

int main( ) {
   cout << "09 - Feb 11, OOP244" << endl;
   IntArray A;
   IntArray B( 10 );
   size_t i = 0;
   cout << "B array has " << B.size( ) << " elements" << endl;
   B.operator[]( 5 ) = 500;

   cout << B.operator[]( 5 ) << endl;

   for ( i = 0; i < B.size( ); i++ ) {
      B.operator[]( i ) = (i + 1) * 10;
   }

   display( B );
   display( A );



   return 0;
}
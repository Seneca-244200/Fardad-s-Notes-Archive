#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace seneca;

void display( const IntArray& I ) {
   for (size_t i = 0; i < I.size(); i++ ) {
      cout << I.element( i ) << " ";
   }
   cout << endl;
}

int main( ) {
   cout << "OOP244NAA, Jan 30" << endl;
   IntArray A;
   IntArray B( 10 );
   size_t i = 0;
   cout << "B array has " << B.size( ) << " elements" << endl;
   A.element( 10 );
   B.element( 5 ) = 500;

   cout << B.element( 5 ) << endl;

   for ( i = 0; i < B.size(); i++ ) {
      B.element( i ) = (i + 1) * 10;
   }

   display( B );
   display( A );



   return 0;
}
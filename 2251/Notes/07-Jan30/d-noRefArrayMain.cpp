#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace seneca;
void display( const IntArray& I ) {
   for (size_t i = 0; i < I.size( ); i++ ) {
      cout << I.getElem( i ) << " ";
   }
   cout << endl;
}
int main( ) {
   cout << "OOP244NAA, Jan 30" << endl;
   IntArray A;
   IntArray B( 10 );
   size_t i = 0;
   cout << "B array has " << B.size( ) << " elements" << endl;

   for ( i = 0; i < B.size( ); i++ ) {
      B.setElem( i, i * 10 );
   }
     
   display( B );

   return 0;
}
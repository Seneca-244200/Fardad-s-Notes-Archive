#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace seneca;
int main( ) {
   cout << "OOP244NAA, Jan 30" << endl;
   IntArray A;
   IntArray B( 10 );
   size_t i = 0;
   cout << "B array has " << B.size( ) << " elements" << endl;

   for ( i = 0; i < 20; i++ ) {
      B.setElem( i , i * 10 );
   }

   for ( i = 0; i < 20; i++ ) {
      cout << B.getElem( i) << " ";
   }
   cout << endl;

   return 0;
}
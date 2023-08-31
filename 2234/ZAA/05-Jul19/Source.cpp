#include <iostream>
#include "DoubleArray.h"
using namespace std;
using namespace sdds;
void showArray( const DoubleArray& D ) {
   for ( size_t j = 0; j < D.size( ); j++ ) {
      //      cout << D.element( j ) << " ";
      cout << D[j] << " ";
   }
   cout << endl;
}
/* make this work
void showArray( DoubleArray D ) {
   for ( size_t j = 0; j < D.size( ); j++ ) {
      //      cout << D.element( j ) << " ";
      cout << D[j] << " ";
   }
   cout << endl;
}
*/
int main( ) {
   DoubleArray d( 4 );
   DoubleArray x( 400 );

   /* const double* dptr = d;
   * this will crash at line 21... why?
   */
   for ( size_t i = 0; i < 40; i++ ) {
      d[i] = i * 1.2;
   }
   const double* dptr = d; // this will not crash, why?
   for ( int j = 0; j < 10; j++ ) {
      cout << dptr[j] << endl;
   }
   showArray( d );
   /* x = d; // make this work
   showArray( x );
   */
   return 0;
}
#include <iostream>
using namespace std;
void line( char fill, size_t len );
void line( char fill );
void line( );
int main( ) {
   line( '+', 40 );
   line( '=' );
   line( );
   return 0;
}
void line( ) {
   line( '-' );
}
void line( char fill ) {
   line( fill, 70 );
}
void line( char fill, size_t len ) {
   for ( size_t i=0; i < len; i++ ) {
      cout << fill;
   }
   cout << endl;
}

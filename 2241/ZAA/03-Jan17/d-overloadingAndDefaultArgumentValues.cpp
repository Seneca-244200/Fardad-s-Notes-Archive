#include <iostream>
using namespace std;
void line( char fill ='-', size_t len = 79 );
void line( unsigned int len );
int main( ) {
   line( '+', 50 );
   line( '=' );
   line( 65u );
   return 0;
}
void line( unsigned int len ) {
   line( '-', len );
}
void line( char fill, size_t len ) {
   for ( size_t i = 0; i < len; i++ ) {
      cout << fill;
   }
   cout << endl;
}

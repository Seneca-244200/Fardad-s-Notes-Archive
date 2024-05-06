#include <iostream>
using namespace std;
void line( char fill, size_t len );
void line( char fill );
//void line( size_t len ); in  conflict with line(char) since char is integral


int main( ) {
   line( '+', 40 );
   line( 66 );
 //  line( 60 );
   return 0;
}
//void line( size_t len ) {
//   line( '-', len );
//}
void line( char fill ) {
   line( fill, 70 );
}
void line( char fill, size_t len ) {
   for ( size_t i=0; i < len; i++ ) {
      cout << fill;
   }
   cout << endl;
}

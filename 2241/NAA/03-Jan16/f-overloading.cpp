#include <iostream>
using namespace std;
void line( char fill = '-', size_t len = 75);


int main( ) {
   line( '+', 40 );
   line( '=' );
   line( );
   return 0;
}

void line( char fill, size_t len ) {
   for ( size_t i=0; i < len; i++ ) {
      cout << fill;
   }
   cout << endl;
}

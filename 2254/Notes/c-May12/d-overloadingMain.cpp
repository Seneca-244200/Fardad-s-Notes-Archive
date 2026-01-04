#include <iostream>
#include "lines.h"
using namespace std;
using namespace seneca;
int main( ) {
   size_t len = line( );
   line( len );
   line( '=' );
   len = line( );
   line( '+', len );
   return 0;
}
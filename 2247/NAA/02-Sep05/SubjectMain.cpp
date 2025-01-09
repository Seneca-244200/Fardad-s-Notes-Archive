#include <iostream>
#include "Subject.h"
using namespace seneca;
using namespace std;
int main( ) {
   Subject S,T;
   S.set( 244, 2 );
   S.print( );
   T.set( 144, 1 );
   T.print( );

   return 0;
}

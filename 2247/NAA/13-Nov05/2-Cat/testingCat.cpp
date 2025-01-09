#include <iostream>
#include "Cat.h"
using namespace std;
using namespace seneca;
int main( ) {
   seneca::debug = true;
   Cat C( "Fluffy", 5 );
   C.act( );
   C.move( );
   C.sound( );
   C.play( );
   cout << "------------End of main" << endl;
   return 0;
}

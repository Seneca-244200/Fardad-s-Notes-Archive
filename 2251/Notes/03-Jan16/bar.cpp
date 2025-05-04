#include <iostream>
#include "bar.h"
using namespace std;
namespace seneca {
   void bar(  int len, char fill ) {
      for ( int i = 0; i < len; cout << fill, i++ );
      cout << endl;
   }
   void bar( int len ) {
      bar( len, '-' );
   }
   void bar( ) {
      bar( 79, '_' );
   }
   void bar( char fill ) {
      bar( 79, fill );
   }
}

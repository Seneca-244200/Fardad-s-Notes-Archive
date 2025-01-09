#include <iostream>
#include "line.h"
using namespace std;
namespace seneca {
   void line( char fl, int len ) {
// for(firsttime, firstime,first time; condition; endofloop,endofloop);
//      for ( int i = 0; i < len; cout << fl, i++ );
      int i = 0;
      while ( i < len ) {
         cout << fl;
         i++;
      }
      cout << endl;
   }

   void line( int len ) {
      line( '=', len );
   }



   //void line( ) {
   //   line( '_', 79 );
   //}

}
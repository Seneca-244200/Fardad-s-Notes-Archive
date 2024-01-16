#include <iostream>
#include "line.h"
using namespace std;
namespace sdds {
   void line( char fl, int len ) {
      int i;
      for ( i = 0; i < len; i++ ) {
         cout << fl;
      }
      cout << endl;
   
   }
   //void line( char fl ) {
   //   line( fl, 79 );
   //}
   void line( int len ) {
      line( '-', len );
   }
}
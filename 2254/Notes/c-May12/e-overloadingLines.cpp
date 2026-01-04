#include <iostream>
#include "lines.h"
using namespace std;
namespace seneca {
   void line( size_t len ) {
      for ( size_t i = 0; i < len; i++ ) {
         cout << "-";
      }
      cout << endl;
   }

   void line(  char fill, size_t len ) {
      for ( size_t i = 0; i < len; i++ ) {
         cout << fill;
      }
      cout << endl;
   }

   void line( char fill ) {
      line( fill, 79 );
   }

   size_t line( ) {
      size_t len;
      cout << "Enter the length of the line\n> ";
      cin >> len;
      if ( len == 0 ) len = 10;
      if ( len >= 80 ) len = 79;
      return len;
   }


}
#include "Utils.h"
namespace sdds {

   int strlen( const char* str ) {
      int len{};
      while ( str[len] ) {
         len++;
      }
      return len;
   }

   char* strcpy( char* des, const char* src ) {
      int i;
      for ( i = 0; src[i]; i++ ) {
         des[i] = src[i];
      }
      des[i] = 0;
      return des;
   }

   char* strcpy( char* des, const char* src, int len ) {
      int i;
      for ( i = 0; src[i] && i < len; i++ ) {
         des[i] = src[i];
      }
      des[i] = 0;
      return des;
   }

}
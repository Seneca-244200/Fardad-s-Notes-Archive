#include <iostream>
#include "Utils.h"
using namespace std;
namespace sdds {

    int getInt( ) {
       int num{ };
       bool done = false;
       while ( !done ) {
          cin >> num;
          if ( cin.fail( ) ) {
             cout << "Invalid integer...\n> ";
             cin.clear( );
          }
          else {
             if ( cin.peek( ) != '\n' ) {
                cout << "Only an integer please...\n> ";
             }
             else {
                done = true;
             }
          }
          cin.ignore( 100000, '\n' );
       }
       return num;
    }
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

   int getInt( int min, int max ) {
      int num{};
      bool done = false;
      while ( !done ) {
         num = getInt( );
         if ( num < min || num > max ) {
            cout << "Invalid range, [" << min << "<=number<=" << max << "]...\n> ";
         }
         else {
            done = true;
         }
      }
      return num;
   }

}
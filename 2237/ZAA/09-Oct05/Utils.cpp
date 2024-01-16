#include <iostream>
#include "Utils.h"
using namespace std;
namespace sdds {
    int strlen( const char* cStr ) {
       int len{};
       while ( cStr[len] ) {
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
       int num;
       bool done = false;
       do {
          num = getInt( );
          if ( num < min || num > max ) {
             cout << "Number out of range...\n> ";
          }
          else {
             done = true;
          }
       } while ( !done );
       return num;
    }
    int getInt( ) {
       int num;
       bool done = false;
       do {
          cin >> num;
          if ( cin.fail( ) ) {
             cerr << "Bad Integer, try again...\n> ";
             cin.clear( ); // to clear cin fail()
          }
          else {
             // first was and int, but what about the rest?
             if ( cin.peek( ) != '\n' ) {
                cout << "Please enter only an integer....\n> ";
             }
             else {
                done = true;
             }
          }
          cin.ignore( 100000, '\n' );
       } while ( !done );
       return num;
    }

}
#include <iostream>
#include "Utils.h"
using namespace std;
namespace seneca {
   Utils ut;
   const double PI{ 3.14159265 };

   char* Utils::strcat( char* des, const char* src ) {
      size_t len = ut.strlen( des );
      size_t i = 0;
      while ( src[i] ) {
         des[i + len] = src[i];
         i++;
      }
      des[i + len] = char( 0 );
      return des;
   }


   size_t Utils::strlen( const char* str ) {
      size_t len{};
      while ( str[len] ) {
         len++;
      }
      return len;
   }

   char* Utils::strcpy( char* des, const char* src ) {
      size_t i;
      for ( i = 0; src[i]; i++ ) {
         des[i] = src[i];
      }
      des[i] = 0;
      return des;
   }

   char* Utils::strcpy( char* des, const char* src, size_t len ) {
      size_t i;
      for ( i = 0; src[i] && i < len; i++ ) {
         des[i] = src[i];
      }
      des[i] = 0;
      return des;
   }


   double Utils::getDouble( ) {
      double val{};
      cin >> val;
      while ( cin.fail( ) ) {
         cout << "Invalue double, retry\n> ";
         cin.clear( );
         cin.ignore( 10000, '\n' );
         cin >> val;
      }
      cin.ignore( 10000, '\n' );// wipe keyboard clean
      return val;
   }

   void Utils::getCstr( char* str, size_t len ) {
      cin.getline( str, len + 1 );
      // same as cin.getline( str, len + 1, '\n' );
      while ( cin.fail( ) ) {
         cout << "Maximum of " << len << " chars, retry\n> ";
         cin.clear( );
         cin.ignore( 100000, '\n' );
         cin.getline( str, len + 1 );
      }    
   }

   bool Utils::yes( const char* prompt ) {
      char response{};
      char newline{ };
      if ( prompt ) cout << prompt;
      //      response = cin.get( );
      cin.get( response );
      cin.get( newline );
      while ( newline != '\n' ||
         (response != 'Y' && response != 'y' && response != 'N' && response != 'n') ) {
         cout << "Only (Y)es or (N)o, retry\n> ";
         if ( newline != '\n' ) cin.ignore( 10000, '\n' );
         cin.get( response );
         cin.get( newline );
      }
      return response == 'Y' || response == 'y';
   }

   void Utils::aloCopy( char*& des, const char* src ) {
      des = nullptr;
      if ( src ) {
         des = new char[ut.strlen( src ) + 1];
         ut.strcpy( des, src );
      }
   }

   void Utils::aloCopy( char*& des, const char* src, size_t len ) {
      des = nullptr;
      if ( src ) {
         size_t l = ut.strlen( src );
         des = new char[(l>len?len:l) + 1];
         ut.strcpy( des, src, len );
      }
   }

}
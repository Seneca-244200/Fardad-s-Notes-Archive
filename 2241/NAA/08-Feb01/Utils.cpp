#include <iostream>
#include "Utils.h"
using namespace std;
namespace seneca {
   Utils ut; // 
   size_t Utils::strlen( const char* str ) {
      size_t len{};
      while ( str[len] ) {
         len++;
      }
      return len;
   }
   char* Utils::strcpy( char* des, const char* src, size_t len ) {
      size_t i;
      for ( i = 0; src[i] && i < len; i++ ) {
         des[i] = src[i];
      }
      des[i] = 0;
      return des;
   }

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


   void Utils::aloCopy( char*& des, const char* src ) {
      delete[] des;
      des = nullptr;
      if ( src ) {
         des = new char[ut.strlen( src ) + 1];
         ut.strcpy( des, src );
      }
   }

   void Utils::aloCopy( char*& des, const char* src, size_t maxLen ) {
      delete[] des;
      des = nullptr;
      if ( src ) {
         size_t len = ut.strlen( src );
         des = new char[(len < maxLen ? len : maxLen) + 1];
         ut.strcpy( des, src, maxLen );
      }
   }

   char* Utils::strcpy( char* des, const char* src ) {
      int i;
      for ( i = 0; src[i]; i++ ) {
         des[i] = src[i];
      }
      des[i] = 0;
      return des;
   }


   int Utils::getInt( ) {
      int val{};
      cin >> val;
      while ( cin.fail( ) ) {
         cout << "Invalid Int, retry\n> ";
         cin.clear( );
         cin.ignore( 12000, '\n' );
         cin >> val;
      }
      //cin.ignore( ); // only one character
      cin.ignore( 12000, '\n' );
      return val;
   }

   void Utils::getCstr( char* str, size_t len ) {
      cin.getline( str, len + 1 );
      while ( cin.fail( ) ) {
         cout << "Maximum " << len << " chars!, retry\n> ";
         cin.clear( );
         cin.ignore( 12000, '\n' );
         cin.getline( str, len + 1 );
      }
   }

   bool Utils::getCstr( char*& str ) {
      str = nullptr;
      char buf[MAX_DYNAMIC_READ];
      cin.getline( buf, MAX_DYNAMIC_READ );
      if ( cin ) {
         str = new char[this->strlen( buf ) + 1];
         this->strcpy( str, buf );
      }
      else{
         cin.clear( );
         cin.ignore( 1000, '\n' );
      }
      return bool(str);
   }

   bool Utils::yes(const char* prompt) {
      bool done = false;
      char res{};
      char newline{};
      if ( prompt ) cout << prompt;
      //cin.get( res );
      do {
         res = cin.get( );
         newline = cin.get( );
         if ( newline != '\n' ) {
            cin.ignore( 10000, '\n' );
         }
         else if ( res == 'y' || res == 'Y' || res == 'n' || res == 'N' ) {
            done = true;
         }
      } while ( !done  && cout <<"(Y)es/(N)o only, please retry\n> " );
      return res == 'Y' || res == 'y';
   }

}

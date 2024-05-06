#include <iostream>
#include "Utils.h"
using namespace std;
namespace seneca {
   Utils ut; // 
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

}

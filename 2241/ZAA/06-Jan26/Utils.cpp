#include <iostream>
#include "Utils.h"
using namespace std;
namespace seneca {
   Utils ut;
   const double PI{ 3.14159265 };
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

}
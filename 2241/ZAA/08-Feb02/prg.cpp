#include <iostream>
#include <fstream>
#include "Str.h"
using namespace std;
using namespace seneca;
int main( ) {
   Str name ;
   Str surname;
   ifstream file( "name.txt" );
   while ( file ) {
      name.read( ',', file );
      surname.read( '\n', file );
      if ( !file.fail( ) ) {
         name.cat( " " ).cat( surname );
         cout << "Hello, ";
         name.print( ) << endl;
      }
   }
   file.clear( );
   return 0;
}
#include <iostream>
#include <fstream>
#include "Str.h"
using namespace std;
using namespace seneca;
int main( ) {
   Str name ;
   Str surname;
   ofstream file( "homer.txt" );
   cout << "What is your name?\n> ";
   name.read( );
   cout << "What is your last name\n> ";
   surname.read( );
   cout << "Hello, ";
   name.cat( " " ).cat( surname ).print( ) << endl;
   name.print( file ) << endl;
   return 0;
}
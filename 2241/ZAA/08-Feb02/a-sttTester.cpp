#include <iostream>
#include "Str.h"
using namespace std;
using namespace seneca;
int main( ) {
   Str S{ "This is a string!", 8 };
   Str name = "Fred Soley";  // potato
//   Str name("Fred Soley"); // potaato
//   Str name{ "Fred Soley" }; // petoto
   S.print( );
   name.print( ) << endl;
   name.set( "John Doe" ).print(clog ) << endl;
   name.cat( " White" ).print(cerr)<< endl;

   return 0;
}
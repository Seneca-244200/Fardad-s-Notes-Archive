#include <iostream>
#include "String.h"
#include "Utils.h"
using namespace sdds;
using namespace std;
void firstAndLast(const String& S ) {
   cout << S << " starts with " << S[0] << " and ends with " << S[S.length( ) - 1] << endl;
}
int main( ) {
   String name = "Fred";
   char theName[50];
   firstAndLast( name );
   cout << "looping through over and over" << endl;
   for ( size_t i = 0; i < 100; i++ ) {
      cout << name[i] << " ";
   }
   cout << endl;
   name[0] = 'G';
   firstAndLast( name );

   U.strcpy( theName, name );
//   U.strcpy( name, "A new name!" );
   name = "New name!";

   return 0;
}
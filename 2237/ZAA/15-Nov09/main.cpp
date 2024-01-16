#include <iostream>
#include "String.h"
using namespace sdds;
using namespace std;
void firstAndlast( const String& S ) {
   cout << S << " starts with " << S[0] << " and ends with " << S[S.length( ) - 1] << endl;
}
int main( ) {
   String name = "Fred";  // one arg const (const char*)
   String surname = "Soley";
   String fullname = name + " " + surname;


   cout << fullname << " starts with " << fullname[0] << " and ends with " << fullname[fullname.length( ) - 1] << endl;
   firstAndlast( fullname );
   fullname[0] = 'G';
   cout << fullname << " starts with " << fullname[0] << " and ends with " << fullname[fullname.length( ) - 1] << endl;

   return 0;
}
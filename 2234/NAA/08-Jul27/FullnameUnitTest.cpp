#include <iostream>
#include "Fullname.h"
using namespace std;
using namespace sdds;
void objVal( const char* ID, Fullname value ) {
   cout << ID << ": " << value << endl;
}
void foo( int a = 10, double d = 2.2 ) {
   cout << a << d << endl;
}
int main( ) {
   Fullname FN{ nullptr, nullptr };
   Fullname N{ "Lisa", "Simpson" };
   Fullname empty{ "","" };
   Fullname firstOnly( "Jack" );
   objVal( "FN", FN );
   objVal( "N", N );
   FN = N;
   objVal( "FN", FN );
   objVal( "N", N );
   cout << empty << endl;
   N.call( ) << endl;
   Name* Nptr = &FN;
   Nptr->call( ) << endl;
   firstOnly.call( ) << endl;
   // not possible... foo( , 2.3 );
   return 0;
}

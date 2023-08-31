#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;

Name createName( const char* value ) {
   Name N( nullptr );
   N = value;
   cout << "The N is " << N << endl;
   return N;
}

int main( ) {
   Name theName;
   theName.write( ) << endl;
   theName = createName( "Fred" );
   cout << theName << endl;
   return 0;
}

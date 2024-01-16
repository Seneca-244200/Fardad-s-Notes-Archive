#include <iostream>
#include "Employee.h"
using namespace std;
using namespace sdds;
int main( ) {
   cout << "Good Morning OOP244 ZAA" << endl;
//   int value( 20 );
   int value{ 20 };
   //Employee A( "John Doe" );
   Employee A = "John Doe";  // not an assignment but invoking one arg constructor
   Employee B{ "Jack Smith", 222222 };
   Employee C( "Fred Soley", 123456, 234234.22 );
   A.display( );
   B.display( );
   C.display( );
   cout << value << endl;
   cout << "End of main!" << endl;
   return 0;
}
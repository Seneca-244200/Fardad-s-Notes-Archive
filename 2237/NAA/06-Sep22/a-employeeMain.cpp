#include <iostream>
#include "Employee.h"
using namespace std;
using namespace sdds;
int main( ) {
   cout << "Welcome to OOP244 NAA 05-Sep22!" << endl;
   Employee E( "Fred Soley", 123456, 12345.67 ),
      F( "whatever", 2222, 12345.67 );
//   Employee  G("John Doe");
   Employee  G = "John Doe" ;
   E.salary( 300000.00 );
   E.display( );
   F.display( );
   G.display( );
   return 0;
}
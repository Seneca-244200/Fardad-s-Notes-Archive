#include <iostream>
#include "Employee.h"
using namespace std;
using namespace sdds;
int main( ) {
   cout << "Welcome to OOP244 NAA 05-Sep20!" << endl;
   Employee E, F;
   E.init("Fred Soley", 123456, 12345.67 );
   E.salary( 300000.00 );
   E.display( );
   F.init( "whatever", 2222, 12345.67 );
   F.display( );
   return 0;
}
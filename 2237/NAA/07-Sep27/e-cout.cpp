#include <iostream>
#include "Employee.h"
using namespace std;
using namespace sdds;
int main( ) {
   cout << "Welcome to OOP244 NAA 06-Sep27!" << endl;
   int a = 123;
   double b = 123.456789;
   cout << a << endl;
   cout << b << endl;
   cout.setf( ios::fixed );
   cout.precision( 2 );
   cout << "*";
   cout.width( 20 ); // only effect the next print
   cout << a << "*" << endl;
   cout << "*";
   cout.width( 20 ); // only effect the next print
   cout << b << "*" << endl;
   cout.precision( 5 );
   cout << "*";
   cout.width( 20 ); // only effect the next print
   cout << b << "*" << endl;
   cout.setf( ios::left );
   cout << "*";
   cout.width( 20 ); // only effect the next print
   cout << b << "*" << endl;
   cout.unsetf( ios::left );
   cout.setf( ios::right );
   cout << "*";
   cout.width( 20 ); // only effect the next print
   cout << b << "*" << endl;
   cout.unsetf( ios::right );
   cout.setf( ios::left );
   cout << "*";
   cout.width( 20 ); // only effect the next print
   cout << b << "*" << endl;
   cout.unsetf( ios::left );
   cout.setf( ios::left );
   cout << "*";
   cout.width( 20 ); // only effect the next print
   cout.fill( '+' );
   cout << b << "*" << endl;
   cout.unsetf( ios::left );
   return 0;
}
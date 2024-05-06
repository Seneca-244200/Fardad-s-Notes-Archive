#include <iostream>
using namespace std;
int main( ) {
   char val1[20] ="Hello!";
   cout << "*";
   cout.width( 30 );
   cout << val1 << "*" << endl;

   cout << "*";
   cout.width( 30 );   // next printout only
   cout.setf( ios::left );  // until changed
   cout << val1 << "*" << endl;
   cout.unsetf( ios::left );


   cout << "*";
   cout.width( 30 );   // next printout only
   cout.setf( ios::left );  // until changed
   cout.fill( '~' );
   cout << val1 << "*" << endl;
   cout.unsetf( ios::left );

   cout << "*";
   cout.width( 30 );   // next printout only
   cout.setf( ios::right );  // until changed
   cout.fill( '~' );
   cout << val1 << "*" << endl;
   cout.unsetf( ios::right );

   return 0;
}
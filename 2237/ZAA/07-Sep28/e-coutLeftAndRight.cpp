#include <iostream>
using namespace std;
int main( ) {
   int i = 123;
   cout.fill( '.' );

   cout.setf( ios::left );
   cout << '*';
   cout.width( 20 );  // only for next print
   cout << i << '*' << endl;
   cout.unsetf( ios::left );

   cout.setf( ios::right );
   cout << '*';
   cout.width( 20 );  // only for next print
   cout << i << '*' << endl;
   cout.unsetf( ios::right );

   cout.setf( ios::left );
   cout << '*';
   cout.width( 20 );  // only for next print
   cout << i << '*' << endl;
   cout.unsetf( ios::left );

   cout << '*';
   cout.width( 20 );  // only for next print
   cout << i << '*' << endl;
   return 0;
}
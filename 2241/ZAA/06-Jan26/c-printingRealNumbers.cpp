#include <iostream>
using namespace std;
int main( ) {
   double v1{ 3.14159265 };
   cout.setf( ios::fixed );
   cout.precision( 3 );
   cout << '*';
   cout.width( 20 );
   cout << v1 << '*' << endl;

   cout << '*';
   cout.width( 20 );
   cout.setf( ios::left );
   cout << v1 << '*' << endl;
   cout.unsetf( ios::left );

   cout << '*';
   cout.width( 20 );
   cout << v1 << '*' << endl;
    
   v1 = 1.23;

   cout << '*';
   cout.width( 20 );
   cout.setf( ios::right );
   cout << v1 << '*' << endl;
   cout.unsetf( ios::right );

   cout << '*';
   cout.width( 20 );
   cout.fill( '^' );
   cout << v1 << '*' << endl;

   cout << '*';
   cout.width( 20 );
   cout << v1 << '*' << endl;

   cout << '*';
   cout.width( 20 );
   cout.fill( ' ' );
   cout << v1 << '*' << endl;


   return 0;
}
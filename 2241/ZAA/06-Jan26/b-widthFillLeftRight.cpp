#include <iostream>
using namespace std;
int main( ) {
   int v1{ 1234 };
   char v2[31] {"Hello" };
   cout << '*';
   cout.width( 20 );
   cout << v1 << '*' << endl;

   cout << '*';
   cout.width( 20 );
   cout.setf( ios::left );
   cout << v2 << '*' << endl;
   cout.unsetf( ios::left );

   cout << '*';
   cout.width( 20 );
   cout << v1 << '*' << endl;

   cout << '*';
   cout.width( 20 );
   cout.setf( ios::right );
   cout << v2 << '*' << endl;
   cout.unsetf( ios::right );

   cout << '*';
   cout.width( 20 );
   cout.fill( '^' );
   cout << v1 << '*' << endl;

   cout << '*';
   cout.width( 20 );
   cout << v2 << '*' << endl;

   cout << '*';
   cout.width( 20 );
   cout.fill( ' ' );
   cout << v2 << '*' << endl;


   return 0;
}
#include <iostream>
using namespace std;
int main( ) {
   int i = 123;
   double d = 123.456789;
   char cstr[] = "Hello!";
   cout.setf( ios::fixed ); // for the duration of execution
   cout.precision( 2 );
   cout.fill( '.' );
   cout << '*';
   cout.width( 20 );  // only for next print
   cout << i << '*' << endl;
   cout << '*';
   cout.width( 20 );  // only for next print
   cout << d << '*' << endl;
   cout << cstr << endl;
   return 0;
}
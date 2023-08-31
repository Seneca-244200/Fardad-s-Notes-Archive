#include <iostream>
using namespace std;
int main( ) {
   int year;
   int mon;
   int day;

   cout << year;
   cout << "/";
   //cout.fill( 0 ); careful not to do this!!!!
   cout.fill( '0' );
   cout.width( 2 );
   cout << mon;
   cout << "/";
   cout.fill( '0' );
   cout.width( 2 );
   cout << day;

   return 0;
}
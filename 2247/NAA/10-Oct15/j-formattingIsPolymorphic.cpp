#include <iostream>
using namespace std;


int main( ) {
   cout << "1***********************************" << endl;
   cout << "[";
   cout.width( 20 );
   cout.fill( '#' ); // fill sticks
   cout << "Fred" << "] " << endl;;
   cout << "1***********************************" << endl;
   cout << "[";
   cout.width( 20 );
   cout.fill( ' ' ); // fill sticks
   cout << "john" << "] " << endl;;

   return 0;
}
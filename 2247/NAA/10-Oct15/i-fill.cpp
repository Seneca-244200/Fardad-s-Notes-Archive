#include <iostream>
using namespace std;


int main( ) {
   int num = 123;
   cout << "1***********************************" << endl;
   cout << "[";
   cout.width( 20 );
   cout.fill( '#' ); // fill sticks
   cout << num << "] " << endl;;
   cout << "1***********************************" << endl;
   cout << "[";
   cout.width( 20 );
   cout.fill( ' ' ); // fill sticks
   cout << num << "] " << endl;;

   return 0;
}
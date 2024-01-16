#include <iostream>
using namespace std;
int main( ) {
   int i,j,k;
   cout << "i: ";
   cin >> i;
   if ( cin.fail( ) ) {
      cout << "bad int!" << endl;
      cin.clear( );
      cin.ignore( 10000, '\n' );
   }
   cout << "j: ";
   cin >> j;
   cout << "k: ";
   cin >> k;

   cout << i << ", " << j << ", " << k << endl;

   return 0;
}
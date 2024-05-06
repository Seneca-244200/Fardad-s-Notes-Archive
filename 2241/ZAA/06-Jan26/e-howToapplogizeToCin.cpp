#include <iostream>
using namespace std;
int main( ) {
   double num{};
   for ( size_t i = 0; i < 4; i++ ) {
      cout << (i+1) <<  "- Enter a double\n> ";
      cin >> num;
      if ( cin ) {
         cout << "You entered: " << num << endl;
      }
      else {
         cin.clear( ); // I am so sorry!
         cin.ignore( 10000, '\n' );
         cout << "I said double you ...., try again\n> ";
         i--;
      }
   }
   return 0;
}
#include <iostream>
using namespace std;
int main( ) {
   cout << "OOP244 NAA - O9-Oct04" << endl;
   int num;
   for ( int i = 0; i < 4; i++ ) {
      cout << "Enter an int:\n> ";
      cin >> num;
      if ( cin ) { // all good
         cout << "You entered: " << num << endl;
      }
      else { // bad things happened
         cout << "Last read failed!, try agian\n> " << endl;
         cin.clear( ); // sorry, go back to normal
         cin.ignore( 10000, '\n' );// flushes upto 10000 character from keyboard
         i--;
      }
   }
   return 0;
}
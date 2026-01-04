#include <iostream>
using namespace std;
/*\n == <ENTER> == newline
     123\n
  abc\n
  123 \n
*/
int getInt( ) {
   int val;
   bool done = false;
   while ( !done ) {
      cin >> val;
      if ( cin.fail( ) ) {
         cin.clear( ); // say sorry so it talk to you again
         cin.ignore( 10000, '\n' );
         cout << "Invalid Intger, try again\n> ";
      }
      else{
         char newLineChar = cin.get( );
         if ( newLineChar != '\n' ) {
            cout << "Only an integer please, retry\n> ";
            cin.ignore( 10000, '\n' );
         }
         else {
            done = true;
         }
      }
   }
   return val;
}

int main( ) {
   int val;
   cout << "Enter an int\n> ";
   val = getInt( );
   cout << "You entered " << val << endl;
   return 0;
}
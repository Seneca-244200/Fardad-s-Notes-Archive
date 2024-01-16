#include <iostream>
using namespace std;
int getInt( );

int getInt( int min, int max ) {
   int num;
   bool done = false;
   do {
      num = getInt( );
      if ( num < min || num > max ) {
         cout << "Number out of range...\n> ";
      }
      else {
         done = true;
      }
   } while ( !done );
}
int getInt( ) {
   int num;
   bool done = false;
   do {
      cin >> num;
      if ( cin.fail( ) ) {
         cerr << "Bad Integer, try again...\n> ";
         cin.clear( ); // to clear cin fail()
      }
      else {
         // first was and int, but what about the rest?
         if ( cin.peek( ) != '\n' ) {
            cout << "Please enter only an integer....\n> ";
         }
         else {
            done = true;
         }
      }
      cin.ignore( 100000, '\n' );
   } while ( !done );
   return num;
}

int main( ) {
   int number;
   cout << "Enter a number: ";
   number = getInt( );
   cout << "The number is: " << number << endl;
   return 0;
}
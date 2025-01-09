#include <iostream>
using namespace std;
int getInt( ) {
   int num;
   bool done = false;
   do {
      cin >> num;
      if ( cin ) {
         if ( cin.peek( ) != '\n' ) {
            cout << "Please enter ONLY and integer, retry\n> ";
         }
         else {
            done = true;
         }
      }
      else {
         cin.clear( );
         cout << "Bad Integer, retry\n> ";
      }
      cin.ignore( 100000, '\n' );
   } while ( !done );

   return num;
}


int main( ) {
   int val;
   cout << "Integer\n> ";
   val = getInt( );
   cout << "The value is " << val << endl;
   return 0;
}
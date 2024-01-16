#include <iostream>
using namespace std;

int main( ) {
   cout << "OOP244 ZAA 08-Oct02" << endl;
   char ch;
   cout << "Enter a character: ";
   ch = cin.get( );
   cin.ignore( 100000, '\n' );
   cout << ch << endl;
   cout << "Enter a character: ";
   cin.get( ch );
   cin.ignore( 100000, '\n' );
   cout << ch << endl;

   return 0;
}
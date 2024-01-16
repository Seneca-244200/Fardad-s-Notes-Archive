
#include <iostream>
using namespace std;
int main( ) {
   cout << "OOP244 NAA 08-Oct04" << endl;
   char ch;
   cout << "Enter a character: ";
   ch = cin.get( );
   cin.ignore( 100000, '\n' );
   cout << ch << endl;  
   cout << "Enter a character: ";
   cin.get( ch ).ignore( 100000, '\n' );
   cout << ch << endl;
   return 0;
}
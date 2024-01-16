#include <iostream>
using namespace std;
int main( ) {
   cout << "OOP244 ZAA 08-Oct02" << endl;
   char str[81];
   cout << "ignoring 3 characters" << endl << "> ";
   cin.ignore( 3 );
   cin >> str;
   cout << str << endl;
   cout << "ignoring '\\n' characters" << endl << "> ";
   cin.ignore( '\n' );
   cin >> str;
   cout << str << endl;
   return 0;
}
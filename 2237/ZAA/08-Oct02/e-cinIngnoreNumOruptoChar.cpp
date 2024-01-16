#include <iostream>
using namespace std;
int main( ) {
   cout << "OOP244 ZAA 08-Oct02" << endl;
   char str[81];
   cout << "ignoring 4 characters up to and including x" << endl << "> ";
   cin.ignore( 8, 'x' );  // the nature of flushing keyboard
   cin >> str;
   cout << str << endl;

   return 0;
}
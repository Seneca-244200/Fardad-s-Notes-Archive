#include <iostream>
using namespace std;
int main( ) {
   cout << "OOP244 ZAA 08-Oct02" << endl;
   char str[81];
   cout << "ignoring 5 characters" << endl << "> ";
   cin.ignore( 5 );
   cin >> str;
   cout << str << endl;
   return 0;
}
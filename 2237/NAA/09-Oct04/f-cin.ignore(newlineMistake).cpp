
#include <iostream>
using namespace std;
int main( ) {
   cout << "OOP244 ZAA 08-Oct02" << endl;
   char str[81];
   cout << "ignoring '\\n' characters" << endl << "> ";
   cin.ignore( '\n' );
   cin >> str;
   cout << str << endl;
   return 0;
}
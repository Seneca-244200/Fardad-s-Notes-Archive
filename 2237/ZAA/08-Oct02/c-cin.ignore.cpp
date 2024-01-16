#include <iostream>
using namespace std;
int main( ) {
   cout << "OOP244 ZAA 08-Oct02" << endl;
   int num;
   char str[81];
   cout << "ignoring one character" << endl << "> ";
   cin.ignore( );
   cin >> num;
   cout << num << endl;
   return 0;
}
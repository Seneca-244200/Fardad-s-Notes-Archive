#include <iostream>
using namespace std;
/*
istream::ignore() the same as istream::ignore(1);
istream::ignore(int len);
isteram::ignore(int len, char delimeter);


*/
int main( ) {
   cout << "OOP244 ZAA 08-Oct02" << endl;
   int num;
   char str[81];
   cout << char( 65 ) << endl;
   cout << "int: ";
   cin >> num;
//   cin.ignore( 100000, '\n' );  // keyboard flush upto and including '\n'
   cin.ignore( 100000, 10 );  // keyboard flush upto and including '\n'
   cout << "Name: ";
   cin >> str;
   cout << "Hello " << str << endl;
   return 0;
}
#include <iostream>
using namespace std;
int main( ) {
   char str[81];
   cout << "cin.getline 5 characters or up to and including x " << endl << "> ";
   //cin.getline( str, 81 ); // read up to 81 char( 80 + 1 null) and eat the newline ('\n')
   cin.getline( str, 5, 'x' );
   cout << "read: >" << str << "<" << endl;
   cout << "reading the rest..." << endl;
   cin >> str;
   cout << "the rest: >" << str << "<" << endl;
   return 0;
}
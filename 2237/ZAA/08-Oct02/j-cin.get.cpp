#include <iostream>
using namespace std;
int main( ) {
   char str[81];
   cout << "cin.get 5 characters or up to x " << endl << "> ";
   cin.get( str, 5, 'x' );
   cout << "read: >" << str << "<" << endl;
   cout << "reading the rest..." << endl;
   cin >> str;
   cout << "the rest: >" << str << "<" << endl;
   return 0;
}
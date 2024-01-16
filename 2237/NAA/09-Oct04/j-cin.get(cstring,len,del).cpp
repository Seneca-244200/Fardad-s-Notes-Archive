
#include <iostream>
using namespace std;
int main( ) {
   cout << "OOP244 NAA 08-Oct04" << endl;
   char str[11];
   cin.get( str, 10, 'e' );
   //cin.get( str, 10); // these two are the same
   //cin.get( str, 10, '\n' );
   cout << "read: >" << str << "<" << endl;
   cout << "reading the rest..." << endl;
   cin >> str;
   cout << "the rest: >" << str << "<" << endl;
   return 0;
}


#include <iostream>
using namespace std;
int main( ) {
   cout << "OOP244 NAA 08-Oct04" << endl;
   char str[5];
   cout << "reading 5 chars with getline" << endl;
   cin.getline( str, 5, 'x' );
   cout << "read: >" << str << "<" << endl;
   cout << "reading the rest..." << endl;
   if ( cin ) {
      cin >> str;
      cout << "the rest: >" << str << "<" << endl;
   }
   else {
      cout << "cin failed!" << endl;
   }
   return 0;
}

#include <iostream>
using namespace std;
int main( ) {
   char str[10];
   cout << "cin.get 10 (9 chars and null termination) characters " << endl << "> ";
   cin.get( str, 10); 
   cout << "read: >" << str << "<" << endl;
   cout << "reading the rest..." << endl;
   cin >> str;
   cout << "the rest: >" << str << "<" << endl;
   return 0;
}

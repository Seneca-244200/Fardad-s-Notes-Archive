#include <iostream>
using namespace std;
int main( ) {
   int num = 10;
   char str[81] = "hoo hoo";
   cout << "int\n> ";
   cin >> num;
//   if ( !cin ) {
   if(cin.fail() ){
      cin.clear( ); // I am so sorry!!!!
      cin.ignore( 10000, '\n' );
   }
   cout << "string\n> ";
   cin >> str;
   cout << "int: " << num << ", string: " << str << endl;

   return 0;
}
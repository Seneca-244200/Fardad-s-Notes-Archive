#include <iostream>
using namespace std;
int main( ) {
   cout << "OOP244 ZAA 08-Oct02" << endl;
   int num;
   //int a, b, c, d;
   //cin >> a >> b >> c >> d;
   for ( int i = 0; i < 4; i++ ) {
      cout << "Enter an int\n> ";
      cin >> num;
      if ( cin.fail() ) {
         cout << "last read failed!" << endl;
      }
      else {
         cout << "read ok!" << endl;
      }
      cout << "read: " << num << endl;
   }
   return 0;
}
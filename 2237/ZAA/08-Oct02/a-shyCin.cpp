#include <iostream>
using namespace std;
int main( ) {
   cout << "OOP244 ZAA 08-Oct02" << endl;
   int num;
   for ( int i = 0; i < 4; i++ ) {
      cout << "Enter an int\n> ";
      cin >> num;
      if ( cin ) {
         cout << "read ok!" << endl;
      }
      else {
         cout << "last read failed!" << endl;
      }
      cout << "read: " << num << endl;
   }
   return 0;
}
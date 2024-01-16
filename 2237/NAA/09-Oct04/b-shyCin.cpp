#include <iostream>
using namespace std;
int main( ) {
   cout << "OOP244 NAA - O9-Oct04" << endl;
   int num;
   for ( int i = 0; i < 4; i++ ) {
      cout << "Enter an int:\n> ";
      cin >> num;
      if ( cin ) { // all good
         cout << "You entered: " << num << endl;
      }
      else { // bad things happened
         cout << "Last read failed!" << endl;
      }
   }
   return 0;
}
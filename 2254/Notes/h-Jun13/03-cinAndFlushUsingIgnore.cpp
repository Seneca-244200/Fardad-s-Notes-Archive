#include <iostream>
using namespace std;
int main( ) {
   int val;
   cout << "Enter an int\n> ";
   cin >> val; // always skips leading spaced and always leaves all trailing characters in the keyboard buffer
   cin.ignore( 10000, '\n' );//flushes the keyboard
   cout << "You entered " << val << endl;

   cout << "Enter an int\n> ";
   cin >> val; // always skips leading spaced and always leaves all trailing characters in the keyboard buffer
   cin.ignore( 10000, '\n' );//flushes the keyboard
   cout << "You entered " << val << endl;



   return 0;
}
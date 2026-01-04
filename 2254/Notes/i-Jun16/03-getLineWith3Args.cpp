#include <iostream>
using namespace std;
int main( ) {
   char str[80];
   cout << "Enter characters:\n> ";
   // cin.getline(char str[], size_t maxArraySize, char delimiter = '\n');
   cin.getline( str, 80, '!' );  // reads upto 80 and eats the '!'
   cout << "You entered: *" << str << "*" << endl;
   cin.getline( str, 80 );
   cout << "And the rest is: *" << str << "*" << endl;
   return 0;
}
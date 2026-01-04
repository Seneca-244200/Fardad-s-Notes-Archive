
#include <iostream>
using namespace std;
int main( ) {
   char str[80];
   char ch;
   cout << "Enter characters:\n> ";
   // cin.getline(char str[], size_t maxArraySize, char delimiter = '\n');
   cin.get( ch );  // read one character and returns *this
   cout << "You entered: *" << ch << "*" << endl;
   cin.getline( str, 80 );
   cout << "And the rest is: *" << str << "*" << endl;
   return 0;
}
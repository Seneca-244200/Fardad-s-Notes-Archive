#include <iostream>
#include "String.h"
using namespace sdds;
using namespace std;
void printString( String arg ) {
   cout << arg << endl;
}
int main( ) {
   String S;
   String T = "Something";
   cout << "Hello what is your name?\n> ";
   cin >> S;
   T = S;
   printString( T );
   return 0;
}
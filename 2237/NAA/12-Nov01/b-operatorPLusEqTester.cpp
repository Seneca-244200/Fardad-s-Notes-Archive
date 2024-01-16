#include <iostream>
#include "String.h"
using namespace sdds;
using namespace std;
void printString( String arg ) {
   cout << arg << endl;
}
int main( ) {
   String name = "Fred";
   String fullname;
   fullname += name;
   fullname += " Soleimanloo";
   cout << fullname << endl;
   return 0;
}
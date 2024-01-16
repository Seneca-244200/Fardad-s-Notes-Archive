#include <iostream>
#include "String.h"
using namespace sdds;
using namespace std;
void printString( String arg ) {
   cout << arg << endl;
}
int main( ) {
   String name = "Fred";
   String surname = "Soley";
   String fullname;
   fullname = name + " " + surname;
   cout << fullname << endl;
   String another;
   another = "Al " + fullname;
   cout << another << endl;
   return 0;
}
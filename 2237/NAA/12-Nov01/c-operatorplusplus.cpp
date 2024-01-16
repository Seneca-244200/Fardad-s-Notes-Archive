#include <iostream>
#include "String.h"
using namespace sdds;
using namespace std;
void printString( String arg ) {
   cout << arg << endl;
}
int main( ) {
   String name = "Fred";
   name++;
   cout << name << "Soley" << endl;
   ++name;
   cout << "Al" << name << "Soley" << endl;
   return 0;
}
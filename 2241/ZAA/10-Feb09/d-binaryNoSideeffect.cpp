#include <iostream>
#include <fstream>
#include "Str.h"
using namespace std;
using namespace seneca;
void greetings( Str S ) {
   cout << "Hello " << S << endl;
}
int main( ) {
   Str name;
   Str lastname;
   Str fullname;
   cout << "Hello, your first name?\n> ";
   cin >> name;
   cout << "Last name?\n> ";
   cin >> lastname;
   name++;
   fullname = name + lastname;
   greetings(fullname);


   return 0;
}
/*
*  operator to overload: operator<<
*  type of the left operand:  ostream
*  type of the right operand: Str
*  return is the return type: 
* 
*/ 
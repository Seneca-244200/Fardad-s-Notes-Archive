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
   Str& S = name;
   Str fullname;
   cout << "Hello, your first name?\n> ";
   cin >> name;
   name = S;
   greetings( S ); // greeting(Str S = name);
   //cout << "Last name?\n> ";
   //cin >> lastname;
   //name++;
   //fullname = name + lastname;


  
   return 0;
}
/*
*  operator to overload: operator<<
*  type of the left operand:  ostream
*  type of the right operand: Str
*  return is the return type: 
* 
*/ 
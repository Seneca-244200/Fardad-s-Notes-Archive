#include <iostream>
#include <fstream>
#include "Str.h"
#include "Utils.h"
using namespace std;
using namespace seneca;
int main( ) {
   Str name;
   Str greeting;
   char cstring[91];
   cout << "Hello, your first name?\n> ";
   cin >> name;
   greeting = "Hello " + name;
   cout << greeting << endl;
   ut.strcpy( cstring, greeting );
   cout << cstring << ", with length of " << size_t(greeting) << endl;
   // this will go to an endless loop, why?
   for ( size_t i = greeting+5; i >= 0; i-- ) {
      cout << greeting[i];
   }
   cout << endl;

   return 0;
}
/*
*  operator to overload: operator<<
*  type of the left operand:  ostream
*  type of the right operand: Str
*  return is the return type:
*
*/
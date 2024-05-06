#include <iostream>
#include <fstream>
#include "Str.h"
#include "Utils.h"
using namespace std;
using namespace seneca;

void show( Str S ) {
   cout << S << endl;
}

int main( ) {
   Str name = "Homer";
   Str fullname;
   show( name ); // show (Str S = name);
   fullname = name;  // potaatos
   fullname.operator=( name );// potatos

   return 0;
}
/*
*  operator to overload: operator<<
*  type of the left operand:  ostream
*  type of the right operand: Str
*  return is the return type:
*
*/
#include <iostream>
#include <fstream>
#include "Str.h"
using namespace std;
using namespace seneca;
int main( ) {
   Str name = "Fred";
   Str lastName = "Soley";
   Str fullname;
   fullname = name++;
   fullname += lastName;
   cout << "Hello, " << fullname << " how are you?" << endl;
   return 0;
}
/*
*  operator to overload: operator<<
*  type of the left operand:  ostream
*  type of the right operand: Str
*  return is the return type: 
* 
*/ 
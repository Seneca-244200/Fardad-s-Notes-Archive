#include <iostream>
#include <fstream>
#include "Str.h"
using namespace std;
using namespace seneca;
int main( ) {
   Str name;
   cout << "Hello, you name?\n> ";
   cin >> name;
   cout << "Good morning " << name << "!" << endl;

   return 0;
}
/*
*  operator to overload: operator<<
*  type of the left operand:  ostream
*  type of the right operand: Str
*  return is the return type: 
* 
*/ 
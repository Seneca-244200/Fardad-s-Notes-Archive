#include <iostream>
#include "MyStr.h"
using namespace std;
using namespace seneca;
int main( ) {
   MyStr Empty;
   MyStr S = "Hello there!!!";
   MyStr T("Hello there!!!", 5);
   S.print( ) << endl;
   S.set( "A new string now!" ).print( ) << endl;
   S.print( ) << endl;
   T.print( ) << endl;
   Empty.print( ) << endl;
   return 0;
}
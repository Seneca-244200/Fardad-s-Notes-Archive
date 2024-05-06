#include <iostream>
#include "MyStr.h"
using namespace std;
using namespace seneca;
int main( ) {

   /*  pointers and references explained
   int a;
   int& ref = a;
   int* p;
   p = &a;

   // *p is the same as ref and same as a

   int* q;
   q = &a;
   q = &ref;
   q = &*p;
   */



   MyStr Empty;
   MyStr S = "Hello there!!!";
   MyStr T("Hello there!!!", 5);
   S.print( ) << endl;
   S.set( "A new string now!" ).print( ) << endl;
   S.print( ) << endl;
   T.print( ) << endl;
   T.cat( ", how are you today?" ).print( ) << endl;
   Empty.print( ) << endl;
   return 0;
}
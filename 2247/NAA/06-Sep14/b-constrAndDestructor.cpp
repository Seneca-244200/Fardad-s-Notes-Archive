#include <iostream>
#include "ID.h"
using namespace std;
using namespace seneca;
int main( ) {
   ID I;
//   ID H = "Homer";
//   ID H("Homer");
   ID H{ "Homer" };
   ID B( "Bart", 1234 );
   ID L{ "Lisa" , 22345 };
   int a( 2 );
   cout << a << endl;
   I.display( );
   H.display( );
   B.display( );
   L.display( );
   /*I.deallocate( );
   H.deallocate( );
   B.deallocate( );
   L.deallocate( );*/
   return 0;
}
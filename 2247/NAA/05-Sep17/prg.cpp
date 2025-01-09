#include <iostream>
#include "ID.h"
using namespace std;
using namespace seneca;
int main( ) {
   ID A( "Jack", 24565 );
   A.display( ) << endl;
   A.set( "Fred Soley", 102364 ).display( ) << endl;
   //A.display( ) << endl;
   //cout << endl;
   return 0;
}
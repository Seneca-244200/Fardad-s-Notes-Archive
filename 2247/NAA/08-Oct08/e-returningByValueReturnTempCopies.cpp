#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace seneca;

IntArray displayArray( const IntArray& I ) {
   cout << I << " are " << I.size( ) << " values!" << endl;
   return I; // could be copied to temp namless object
}

int main( ) {
   IntArray A( 10 );
   displayArray( A );//displayArray(IntArray I = 10) 
   return 0;
}



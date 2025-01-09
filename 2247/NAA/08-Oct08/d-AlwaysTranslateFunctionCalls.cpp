#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace seneca;

void displayArray(IntArray I ) {
   cout << I << " are " << I.size( ) << " values!" << endl;
}

int main( ) {

   displayArray( 10 );//displayArray(IntArray I = 10) 
   return 0;
}



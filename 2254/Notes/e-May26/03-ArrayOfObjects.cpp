#include <iostream>
#include "Assessment.h"
using namespace std;
using namespace seneca;
int main( ) {
   cout << "OOP244NAA - May26" << endl;
   Assessment A[3];
   for ( int i = 0; i < 3; i++ ) {
      cout << (i + 1) << "- ";
      A[i].set( );
   }
   for ( int i = 0; i < 3; i++ ) {
      cout << (i + 1) << "- ";
      A[i].print( );
   }
   return 0;
}
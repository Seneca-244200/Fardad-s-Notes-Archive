#include <iostream>
#include "Assessment.h"
using namespace std;
using namespace seneca;
int main( ) {
   cout << "OOP244NAA - May26" << endl;
   //int I( 100 ); same as below
   int I = 100;// initialization is a call to a one argument constructor.
   cout << I << endl;

   Assessment A = "Final Test";

   A.print( );

   return 0;
}
#include <iostream>
#include "Assessment.h"
using namespace std;
using namespace seneca;
int main( ) {
   cout << "OOP244NAA - May26" << endl;
   Assessment A = "Final Test";
   Assessment B = { "Midterm Test", 85 };
   Assessment C;
   A.print( );
   B.print( );
   C.print( );
   return 0;
}
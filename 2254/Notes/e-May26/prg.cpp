#include <iostream>
#include "Assessment.h"
using namespace std;
using namespace seneca;
int main( ) {
   cout << "OOP244NAA - May26" << endl;
   Assessment A("Final Test", 95);
   Assessment B = { "Midterm Test", 85 };
   A.print( );
   B.print( );
   return 0;
}
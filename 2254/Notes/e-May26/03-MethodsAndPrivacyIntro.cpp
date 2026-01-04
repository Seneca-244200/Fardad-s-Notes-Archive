#include <iostream>
#include "Assessment.h"
using namespace std;
using namespace seneca;
int main( ) {
   cout << "OOP244NAA - May26" << endl;
   Assessment A;
   A.set( );
   //A.m_title[0] = 'X'; private
   cout << "Your entered:"<<endl;
   A.print( );
   return 0;
}
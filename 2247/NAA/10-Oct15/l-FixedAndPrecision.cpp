#include <iostream>
using namespace std;


int main( ) {
   double val1 = 123.56789;
   double val2 = 12312.21341234123412421;
   cout.setf( ios::fixed );
   cout.precision( 2 );
   cout << val1 << endl;
   cout << val2 << endl;
   return 0;
}
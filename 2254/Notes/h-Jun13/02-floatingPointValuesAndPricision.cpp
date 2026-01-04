#include <iostream>
using namespace std;
int main( ) {
   cout << "Jun13 - OOP244NAA" << endl;
   double val = 123.4567898765;
   char name[] = "Joe";

   cout << "*";
   cout << val << "*" << endl;

   cout.setf( ios::fixed ); // stays until you change it (make cout print the way you want)

   cout << "*";
   cout.width( 8 ); // this only effects the next cout
   cout << val << "*" << endl;

   cout.precision( 2 ); // number of digits after decimal point
   cout << "*";
   cout.width( 8 ); // this only effects the next cout
   cout << val << "*" << endl;

   return 0;
}
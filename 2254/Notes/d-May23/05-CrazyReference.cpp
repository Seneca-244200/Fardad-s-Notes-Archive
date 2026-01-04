#include <iostream>
using namespace std;
int& whatTheHeck( int& val ) {
   return val;
}


int main( ) {
   cout << "OOP244NAA - May 23" << endl;
   int x = 123;
   cout << whatTheHeck( x ) << endl;
   whatTheHeck( x )++;
   cout << x << endl;
   return 0;
}
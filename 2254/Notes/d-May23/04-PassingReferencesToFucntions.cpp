#include <iostream>
using namespace std;
void addOne( int& val ) {
   val++;
}


int main( ) {
   cout << "OOP244NAA - May 23" << endl;
   int x = 123;
   addOne( x );// addOne( int& val = x )
   cout << x << endl;
   return 0;
}
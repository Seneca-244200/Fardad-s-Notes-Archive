#include <iostream>
using namespace std;
void print( int val ) {
   cout << "int value is: " << val << endl;
}
void foo( int* vptr ) {
   (*vptr)++; // target of vptr plus one
}


int main( ) {
   cout << "OOP244NAA - May 23" << endl;
   int x = 123;
   print( x ); // print( int val = x);
   print( 54321 );// print( int val = 54321);
   foo( &x );// foo( int* vptr = &x );
   return 0;
}

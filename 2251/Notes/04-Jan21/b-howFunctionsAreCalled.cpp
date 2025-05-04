#include <iostream>
using namespace std;
void foo( int val ) {
   cout << "Val is " << val << endl;
}


int main( ) {
   int num = 10;
   cout << "OOP244NAA Jan 21" << endl;
   foo( num );  // void foo(int val = num);
   foo( 100 );  // void foo(int val = 100);
   return 0;
}
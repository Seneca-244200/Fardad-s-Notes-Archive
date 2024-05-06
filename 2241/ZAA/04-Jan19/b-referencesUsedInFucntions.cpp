#include <iostream>
using namespace std;
void foo( int& a ) {
   cout << a << endl;
   a = 12345;
}


int main( ) {
   cout << "Welcome to OOP244ZAA 04-Jan 19th." << endl;
   int x = 10;
   foo( x );   // foo(int& a = x);
   cout << x << endl;
   return 0;
}
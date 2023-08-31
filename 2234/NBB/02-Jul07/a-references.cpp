#include <iostream>
using namespace std; 
void foo( int a ) {
   cout << a << endl;
}

void faa( int& r ) {
   r = 10000;
}

double& crazy( double& val ) {
   return val;
}


int main( ) {
   int x = 10;
   //int& R;  syntax error
   double d = 123.45;
   foo( x ); // foo(int a = x)
   faa( x ); // faa(int& r = x);
   cout << d << endl;
   crazy( d ) = 543.21;
   cout << d << endl;
   return 0;
}
#include <iostream>
using namespace std;
void foo( int& a ) {
   cout << a << endl;
   a = 12345;
}

int main( ) {
   int x = 34;
   foo( x ); // foo(int& a = x);
   cout << x << endl;
   return 0;
}

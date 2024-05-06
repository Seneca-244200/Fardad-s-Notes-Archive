#include <iostream>
using namespace std;
void foo( int a ) {
   cout << a << endl;
}

int main( ) {
   int x = 34;
   int y( 34 );
   int z{ 34 };
   cout << x << " " << y << " " << z << endl;
   return 0;
}

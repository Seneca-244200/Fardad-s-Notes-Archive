#include <iostream>
using namespace std;
int main( ) {
   int v1{ 1234 };
   char v2[31] {"Hello" };
   cout << v1 << endl;
   cout << v2 << endl;
   cout.width( 20 );// next (v1) will be  printed in 20 spaces, but not v2
   cout << v1 << endl;
   cout << v2 << endl;
   return 0;
}
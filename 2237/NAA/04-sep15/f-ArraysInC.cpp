#include <iostream>
using namespace std;

int main( ) {
   int a[5] = { 10,20,30,40,50 };
   int* p = a;
   for ( int i = 0; i < 5; i++ ) {
      cout << p[i] << " ";
   }
   cout << endl;
   cout << unsigned( a ) << endl;
   cout << unsigned( p ) << endl;
   p++;
   cout << unsigned( p ) << endl;
   cout << *a << endl;
   cout << a[2] << endl;
   cout << *(a + 2) << endl;

   return 0;
}
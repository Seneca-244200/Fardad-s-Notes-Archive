#include <cstdio>
using namespace std;
int main( ) {
   int a[]{ 1,0,2,4,6,0,3,4,0,4,9,34,10 };
   int n = 0;
   for ( int i = 0; i < 13; i++ ) {
      n += (a[i] > 3);
      (a[i] > 3) && printf( "%d ", a[i] );
   }
   printf( "\nmore that 3: %d\n", n );

   return 0;
}
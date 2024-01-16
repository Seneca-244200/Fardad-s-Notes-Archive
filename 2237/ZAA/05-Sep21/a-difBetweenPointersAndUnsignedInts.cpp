#include <iostream>
using namespace std;
int main( ) {
   cout << "Good morning OOP244 ZAA!!!" << endl;
   int a[5] = { 10,20, 30, 40, 50 };
   cout << *a << endl;
   int* p = a;
   unsigned pval = unsigned( p );
   cout << p[2] << endl;
   cout << "a:    " << unsigned( a ) << endl;
   cout << "p:    " << unsigned( p ) << endl;
   cout << "pval: " <<  pval << endl;
   p++;
   pval++;
   cout << "a+1:  " << unsigned( a + 1) << endl;
   cout << "p:    " << unsigned( p ) << endl;
   cout << "pval: " << pval << endl;
   return 0;
}
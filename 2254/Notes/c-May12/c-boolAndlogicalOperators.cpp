#include <iostream>
using namespace std;
int main( ) {
   int ar[10] = { 3,5,3,7,8,6,4,3,9,3 };
   bool cond = false;
   int a = 10, b = 20, c;
   cout << "OOP244NAA May12" << endl;
   cout << cond << endl;
   cond = true;
   cout << cond << endl;
   cond = 123;
   cout << cond << endl;
   c = a > b;
   cout << c << endl;
   c = a < b;
   cout << c << endl;
   c = 0;
   for ( int i = 0; i < 10; i++ ) {
      if ( ar[i] > 5 ) {
         c++;
      }
   }
   cout << ">5: " << c << endl;
   c = 0;
   for ( int i = 0; i < 10; i++ ) {
      c += (ar[i] > 5);
   }
   cout << ">5: " << c << endl;
   return 0;
}
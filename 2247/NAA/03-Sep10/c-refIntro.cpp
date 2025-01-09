#include <iostream>
using namespace std;
int main( ) {
   int i = 10;// init
   int j;  // garbage
   j = 10;  // setting after

   int a = 25;
   int& r = a;
//   int& s; // this is error since referenses must be initialized.
   cout << unsigned( &a ) << " " << unsigned( &r ) << endl;
   cout << "r: " << r << ", a: " << a << endl;
   a = 100;
   cout << "r: " << r << ", a: " << a << endl;
   r = -50;
   cout << "r: " << r << ", a: " << a << endl;
   return 0;
}
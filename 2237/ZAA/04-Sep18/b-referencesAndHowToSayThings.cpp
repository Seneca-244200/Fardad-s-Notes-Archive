#include  <iostream>
using namespace std;
/*
int i;   // integer i;
int* p;   // integer pointer p;
p = &i;   // p is set to address of i;
*p = 32;  // target of p is set to 32;
int& r = i; // integer reference r is set to i;

r = i * *p;  // r is set to i multiplied by target of p;


E = *m * *c * *c;

*/
int main( ) {
   int i = 10;
   int& r = i;
   // int& x; syntax error

   cout << unsigned( &i ) << "..." << unsigned( &r ) << endl;

   cout <<"i: " <<  i << endl;
   cout << "r: " << r << endl;
   r = 200;
   cout << "i: " << i << endl;
   cout << "r: " << r << endl;
   return 0;
}
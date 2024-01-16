#include  <iostream>
using namespace std;


int main( ) {
   int a[5] = { 10,20, 30, 40, 50 };
   cout << *a << endl;
   int* p = a;
   cout << p[2] << endl;

   return 0;
}
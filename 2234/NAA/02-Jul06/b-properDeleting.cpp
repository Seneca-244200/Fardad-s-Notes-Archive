#include <iostream>
using namespace std;
int main( ) {
   int* ptr = new int[1000];
   int* p = new int;
   cout << "Welcome to 02-Jul06NAA" << endl;
   cout << sizeof( ptr ) << endl;
   delete[] ptr;
   delete p;
   return 0;
}
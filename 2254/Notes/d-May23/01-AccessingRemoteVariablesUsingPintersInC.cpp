#include <iostream>
using namespace std;
void foo(int* vptr ) {
   cout << (long long)vptr << endl;
   (*vptr)++; // target of vptr plus one
}


int main( ) {
   cout << "OOP244NAA - May 23" << endl;
   int var = 10;
   foo( &var );  // pass the address of var to foo
   cout << var << endl;
   return 0;
}
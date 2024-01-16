#include <iostream>
using namespace std;

void foo( int a,const char* str ) {
   cout << a << endl;
   cout << str << endl;
}

int main( ) {
   int val = 123;
   char name[] = "Fred";
   foo( val, name );   // foo(int a = val, const char* str = name);

   return 0;
}
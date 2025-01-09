#include <iostream>
#include "ID.h"
using namespace std;
void gotoNext( char*& ptr ) {
   ptr++;
}
int main( ) {
   char str[80] = "ABCDEFGHIJKLMNOP";
   char* p = str;
   cout << p << endl;
   p++;
   cout << p << endl;
   gotoNext( p );
   cout << p << endl;
   return 0;
}
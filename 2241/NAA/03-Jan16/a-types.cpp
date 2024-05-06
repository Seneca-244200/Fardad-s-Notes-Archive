#include <iostream>
using namespace std;
/*
ints:
char
short
int
long
long long
Real:
float
double
long double
*/
int main( ) {
   bool ok = false;
   if ( ok ) {
      cout << "this will no happen!" << endl;
   }
   ok = true;
   if ( ok ) {
      cout << "This will happen!" << endl;
   }
   ok = 234;
   cout << ok << endl;
   return 0;
}
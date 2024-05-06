#include <iostream>
using namespace std;
/*
* Integrals
char
bool
short
int
long
long long 
* Real
float
double
long double

*/
int main( ) {
   char ch = 65;
   bool ok = false;
   cout << 65 << " " << ch << endl;
   ch += 2;
   cout << ch << endl;
   if ( ok ) {
      cout << "This will not happen!" << endl;
   }
   ok = true;
   if ( ok ) {
      cout << "this WILL happen" << endl;
   }
   ok = 123456;
   cout << ok << endl;
   return 0;
}
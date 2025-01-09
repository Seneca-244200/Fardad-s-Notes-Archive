#include <iostream>
using namespace std;
int main( ) {
   int a;
   cout << "integer: \n> " ;
   cin >> a;
   if ( !cin ) {
      cout << "Bad int!" << endl;
   }
   else {
      cout << "the number is: " << a << endl;
   }
   return 0;
}
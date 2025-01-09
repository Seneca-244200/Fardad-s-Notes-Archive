#include <iostream>
using namespace std;
int main( ) {
   int a;
   cout << "integer: \n> " ;
   cin >> a;
   if ( cin ) {
      cout << "the number is: " << a << endl;
   }
   else {
      cout << "Bad int!" << endl;
   }
   return 0;
}
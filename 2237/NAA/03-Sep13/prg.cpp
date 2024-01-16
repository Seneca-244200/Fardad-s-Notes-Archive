#include <iostream>
using namespace std;
int main( ) {
   int i = 10;
   int& r =  i;
   int* p;
   p = &i;
   cout << r << endl;
   r = 30;
   cout << i << endl;

   cout << "Addres of i is: " << unsigned( p ) << endl;
   p = &r;
   cout << "Addres of i is: " << unsigned( p ) << endl;
   cout << "Addres of i is: " << unsigned( &i ) << endl;
   cout << "Addres of i is: " << unsigned( &r ) << endl;
   return 0;
}
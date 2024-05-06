#include <iostream>
using namespace std;

int main( ) {
   int a = 234;
   int& r = a;
   cout << r << endl;
   r = 432;
   cout << a << endl;

   return 0;
}

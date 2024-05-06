#include <iostream>
using namespace std;

int main( ) {
   int a = 25;
   int& r = a;

   cout << r << endl;

   r = 234;

   cout << a << endl;
   cout << r << endl;

   return 0;
}


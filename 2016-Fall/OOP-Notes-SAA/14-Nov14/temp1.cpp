#include <iostream>
using namespace std;
template< typename type>
type add(type a, type b) {
   return a + b;
}


int main() {
   int a = 10, b = 20, c;
   double x = 1.1, y = 2.2, z;
   c = add(a, b);
   z = add(x, y);
   cout << c << endl;
   cout << z << endl;
   return 0;
}
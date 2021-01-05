#include <iostream>
using namespace std;
int main() {
   bool a = true, b = false, c;
   int x=10, y=20, z=30;

   a = x > y;
   b = z > x;
   c = x + y;

   cout << a << "  " << b << "  " << c << " " << true << " " << false << endl;

   return 0;
}
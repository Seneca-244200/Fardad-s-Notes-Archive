#include <iostream>
#include "Box.h"
using namespace std;
using namespace sdds;
int main() {
   int a;
   a = 10;
   int b = 10;
   int c(20);
   int d{ 30 };
   int e{};
   int f[50]{};
   cout << a << " ";
   cout << b << " ";
   cout << c << " ";
   cout << d << " ";
   cout << e << " " << endl;
   for (int i = 0; i < 50; i++) {
      cout << f[i] << " ";
   }
   cout << endl;
   return 0;
}
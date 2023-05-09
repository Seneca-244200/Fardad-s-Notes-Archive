#include <iostream>
#include "bar.h"  // custom headers come always after system
using namespace std;
using namespace sdds;
int main() {
   int a = 10;
   int& r = a;
   cout << r << endl;
   r = 20;
   cout << a << endl;
   return 0;
}

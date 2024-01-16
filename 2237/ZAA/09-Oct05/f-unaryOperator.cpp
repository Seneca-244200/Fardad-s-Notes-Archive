
#include <iostream>
#include "Double.h"
using namespace std;
using namespace sdds;
int main( ) {
   Double
      e = 100.0,
      f;

   //   operator<<(cout, e) << endl;
   cout << "The double value is " << e << " and I printed it with my operator<<!!!" << endl;
   cout << "Enter a double value...\n> ";
   cin >> e;
   cout << "You entered: " << e << endl;
   f = -e;
   // f = e.operator-();
   cout << "f: " << f << endl;
    return 0;
}

#include <iostream>
#include "Double.h"
using namespace std;
using namespace sdds;
int main( ) {
   Double
      e = 100.0;

   //   operator<<(cout, e) << endl;
   cout << "The double value is " << e << " and I printed it with my operator<<!!!" << endl;
   return 0;
}


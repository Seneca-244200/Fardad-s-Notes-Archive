#include <iostream>
using namespace std;
#include "Box.h"
using namespace sdds;
int main() {
   int i(3);
   Box a  ;
//   Box b = 10;
   Box b(10);
   Box c(20, 10);
   a.draw();
   Box(3, 4).draw();
   b.draw();
   c.draw();
   cout << i << endl;
   return 0;
}
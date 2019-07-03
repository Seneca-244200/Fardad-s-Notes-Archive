#include "Box.h"
using namespace sict;
int main() {
 // Box b1; can not create, because noarg constructor is commented
  Box b2(10, 5);
 // Box b3(15);
  Box b3 = 15;
  b1.draw();
  b2.draw();
  b3.draw();
  return 0;
}

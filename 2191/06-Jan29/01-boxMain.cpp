#include "Box.h"
using namespace sict;
int main() {
  Box* p;
  Box a;
  p = new Box(11);
  Box b = 12;
  Box c(15);
  delete p;
  Box d(20, 10);

  return 0;
}

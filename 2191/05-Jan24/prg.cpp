#include "Box.h"
using namespace sict;
int main() {
  Box *p = new Box(3, 3);
  Box b(10);
  Box c(6, 4);
  Box(3, 5).draw();
  p->draw();
  b.draw();
  delete p;
  c.draw();
  return 0;
}

#include "Box.h"
int main() {
  sict::Box b1;
  sict::Box b2;
  sict::Box b3;
  b2.set(15, 14);
  b1.set(5, 3);
  b3.set(100, 100);
  b1.draw();
  b2.draw();
  b3.draw();
  return 0;
}

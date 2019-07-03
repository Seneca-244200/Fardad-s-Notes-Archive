#include "Box.h"
using namespace sict;
int main() {
  Box b[3] = { {3, 5}, 4, 5 };
  int i;
  for (i = 0; i < 3; i++) {
    b[i].draw();
  }
  return 0;
}

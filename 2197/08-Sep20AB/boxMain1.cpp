
#include "Box.h"

using namespace sdds;
void drawBoxes(const Box* b) {
   for (int i = 0; i < 3; i++) b[i].draw();
}
int main() {
   Box a[3];
   Box b, c;
   int i;
   drawBoxes(a);
   for (i = 2; i <= 4; i++) {
      a[i-2].set(i, i);
   }
   b.draw();
   b.set(5, 5);
   c.set(500, 10);
   b.draw();
   c.draw();
   return 0;
}
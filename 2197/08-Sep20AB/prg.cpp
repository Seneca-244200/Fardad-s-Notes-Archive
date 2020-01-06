
#include "Box.h"

using namespace sdds;
void drawBoxes(const Box* b) {
   for (int i = 0; i < 3; i++) b[i].draw();
}
int main() {
   Box a[3];
   Box b = 10, c = 5;
   int i;

   b.draw();
   c.draw();
   return 0;
}
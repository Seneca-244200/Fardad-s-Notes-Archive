#include "Container.h"
int main() {
   Container C;
   C.init("Pencil", 20);
   C.display();
   C.add(3);
   C.display();
   //C.capacity_ = 2;

   return 0;
}
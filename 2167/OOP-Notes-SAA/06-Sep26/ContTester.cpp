#include "Container.h"

void dspContainers(const Container* C, int number) {
   for (int i = 0;i < number;i++) {
      C[i].display();
   }
}
int main() {
   Container C;
   C.init("Pencil", 20);
   C.display();
   C.add(3);
   C.display()const;
   //C.capacity_ = 2;
   return 0;
}
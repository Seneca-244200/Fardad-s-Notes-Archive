#include "rectangle.h"
using namespace oop244e;


int main(){
  int i;
  Rectangle
    A,
    B(10, 5, 'X'),
    C(5);
  A.draw();
  B.draw();
  C.draw();
  for (i = 0; i < 10000000; i++){
    A.set("The A");
    B.set("The BBBB");
    C.set("The CCCCCCCC");
  }
  A.draw();
  B.draw();
  C.draw();
  return 0;
}
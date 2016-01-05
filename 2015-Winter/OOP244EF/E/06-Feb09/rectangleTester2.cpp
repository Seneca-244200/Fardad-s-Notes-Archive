#include "rectangle.h"
using namespace oop244e;


int main(){
  int i;
  Rectangle R[3];
  for (i = 0; i < 3; i++){
    R[i].set(i + 5, i + 3);
  }
  R[1].set("Second One");
  for (i = 0; i < 3; i++){
    R[i].draw();
  }
  return 0;
}
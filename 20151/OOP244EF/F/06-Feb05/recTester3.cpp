
#include "rectangle.h"

using namespace oop244f;

int main(){
  Rectangle T[4];
  int i;
  for (i = 0; i < 4; i++){
    T[i].draw();
  }
  for (i = 0; i < 4; i++){
    T[i].set(5 + i, 3 + i);
  }
  for (i = 0; i < 4; i++){
    T[i].draw();
  }
  return 0;
}
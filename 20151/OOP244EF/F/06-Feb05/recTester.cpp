#include "rectangle.h"
#include <new>
using namespace std;
using namespace oop244f;

int main(){
  Rectangle* T = new (nothrow)Rectangle[3];
  char title[] = "Width is 10 Height is 3";
  int i;
  for (i = 0; i < 3; i++){
    T[i].draw();
  }
  for (i = 0; i < 3; i++){
    title[10] += i * 3;
    T[i].set(title);
    T[i].set(10 + i*3, 3);
  }
  for (i = 0; i < 3; i++){
    T[i].draw();
  }
  delete[] T;
  return 0;
}
#include "rectangle.h"

using namespace oop244f;

int main(){
  Rectangle R(10, 5, '@');
  R.set(10, 5);
  R.draw();
  R.set('*');
  for (int i = 0; i < 10000000; i++){
    R.set("Candy");
  }
  R.draw();
  return 0;
}
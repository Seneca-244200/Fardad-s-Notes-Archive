#include "rectangle.h"

using namespace oop244f;

int main(){
  Rectangle R(10, 5, '@');
  Rectangle S(2, 2);
  Rectangle T;
  S.set("Shoe");
  T.set("Candy");
  R.draw();
  S.draw();
  T.draw();
  return 0;
}
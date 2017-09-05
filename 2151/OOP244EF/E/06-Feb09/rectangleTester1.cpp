#include "rectangle.h"
using namespace oop244e;


int main(){
  Rectangle R;
  R.set(10, 5, 'X');
  R.draw();
  R.set(-10, 5);
  R.draw();
  R.set(10, -5, 'X');
  R.draw();
  R.set(-10, -5);
  R.draw();

  return 0;
}
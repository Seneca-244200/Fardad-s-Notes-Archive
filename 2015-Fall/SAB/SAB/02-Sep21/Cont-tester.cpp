#include <iostream>
#include "Container.h"
using namespace sict;
using namespace std;
int main(){
  char ct[41] = "Water";
  Container C;
  Container D;
  C.set(ct, "ml", 700, 300);
  D.set("Coke", "Bottle", 24, 24);
  C.display();
  D.display();
  return 0;
}
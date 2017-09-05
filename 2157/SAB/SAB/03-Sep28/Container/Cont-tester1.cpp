#include <iostream>
#include "Container.h"
using namespace sict;
using namespace std;
int main(){
  Container C;
  Container D;
  C.conEntry();
  D.set("Coke", "Bottle", 24, 24);
  C.display();
  D.display();
  return 0;
}
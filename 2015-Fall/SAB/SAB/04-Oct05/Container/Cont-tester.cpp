#include <iostream>
#include "Container.h"
using namespace sict;
using namespace std;
int main(){
  char ct[41] = "Water";
  Container C;
  Container D("Coke", "Bottle", 24, 24);
//  Container E("Tea");
  Container* E =new Container("Tea");
  C.display();
  Container("Milk").display();
  E->display();
  C.set(ct, "ml", 700, 300);
  C.display();
  delete E;
  D.display();
  return 0;
}
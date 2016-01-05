#include "GuestList.h"
#include <iostream>
using namespace std;
using namespace sict;

int main(){
  GuestList G1;
  G1.display();
  GuestList G2("My Party", 2);
  G2.read();
  G2.display();
  //G1.operator=(G2);
  GuestList G3;
  G3 = G1 = G2;
  G1.display();
  G2.display();
  G3.display();

  return 0;
}
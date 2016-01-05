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
  GuestList G3 = G2; // same as GuestList G3(G2);
  G3.display();
  return 0;
}
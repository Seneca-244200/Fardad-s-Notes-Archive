#include <iostream>
using namespace std;
#include "container.h"
using namespace oop244f;

int main(){
  Container CoffeeCup;
  Container SippyCup;
  CoffeeCup.setContentType("Coffee");
  SippyCup.setContentType("Water");
  cout << "Coffee Cup has: " << CoffeeCup.getContentType() << endl;
  cout << "Sippy Cup has: " << SippyCup.getContentType() << endl;
  return 0;
}

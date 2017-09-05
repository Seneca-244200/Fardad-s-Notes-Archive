#include <iostream>
using namespace std;
#include "container.h"
using namespace oop244f;

int main(){
  Container CoffeeCup;
  Container SippyCup;
  double spill;
  CoffeeCup.set("Coffee", "CC", 250.0, 0.0);
  SippyCup.set("Water", "CC", 150.0, 0.0);
  SippyCup.fill(100.0);
  SippyCup.display();
  spill = CoffeeCup.fill(300.0);
  // SippyCup._quantity = 10900; can't because privte
  CoffeeCup.display();
//  if (spill > 0.0){
    // say that coffee spilled
//  }
  return 0;
}

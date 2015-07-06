#include <iostream>
using namespace std;
#include "container.h"
using namespace oop244e;

int main(){
  Container CoffeeCup;
  Container SippyCup;
  double spill;
  CoffeeCup.set("Coffee", "CC", 250.0, 100.0);
  SippyCup.set("Water", "CC", 150.0, 50.0);
//  SippyCup._quantity = 12345; Error: private
  SippyCup.fill(100.0);
  SippyCup.display();
  spill = CoffeeCup.fill(300.0);
  CoffeeCup.display();
  if (SippyCup.spilled()){
    cout << "Spilled!" << endl;
  }
  return 0;
}

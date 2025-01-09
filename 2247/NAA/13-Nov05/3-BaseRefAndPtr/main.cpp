#include <iostream>
using namespace std;
#include "Utils.h"
#include "cat.h"
using namespace seneca;
int main(){
   seneca::debug = true;
  Animal* ap = new Cat("Tom");
  cout << "------------Using Animal pointer: " << endl;
  ap->act();
  ap->move();
  ap->sound();
  cout << "------------Deleting a cat pointed by an animal ptr" << endl;
  delete ap; 
  cout << "------------End of main" << endl;
  return 0;
}

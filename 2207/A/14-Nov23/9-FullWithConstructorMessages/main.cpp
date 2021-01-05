#include <iostream>
#include <cstring>
using namespace std;
#include "pet.h"
#include "cat.h"
#include "budgie.h"
#include "goldfish.h"
#include "SDDS_Debug.h"
using namespace sdds;
int main(){
  debug.deactivate(); // remove constructor and desturctor messages
  Pet* p = new Cat("Dynamic Cast", 6);
  Pet myPet("Ugly");
  Cat C("Normal Cat");
  Pet* pp;
  Cat* cp;
  pp = static_cast<Pet*>(&C);
  myPet = static_cast<Pet>(C);
  cp = dynamic_cast<Cat*>(p);
  if (cp != nullptr) {
     cout << "I have cat pointed by a pet" << endl;
  }
  cp = dynamic_cast<Cat*>(&myPet);
  if (cp != nullptr) {
     cout << "I have cat pointed by a pet" << endl;
  }
  else {
     cout << "There is no cat, this is only a pet" << endl;
  }
  return 0;
}

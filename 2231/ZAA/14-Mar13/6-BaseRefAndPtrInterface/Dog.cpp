#include <iostream>
#include "Dog.h"
using namespace std;
namespace sdds {
   Dog::Dog(const char* name):Animal(name) {
      if (sdds::debug) cout << this->name() << " the dog was creaed" << endl;
   }
   void Dog::act() {
      cout << "Act wise "<<name()<< " the Dog" << endl;
   }
   void Dog::move() {
      cout << "Run like " << name() << "the Dog" << endl;
   }
   void Dog::sound() {
      cout << "Woof woof!" << endl;
   }
   Dog::~Dog() {
      if (sdds::debug)cout << name() << "the dog is gone!" << endl;
   }

}

#include <iostream>
#include "Dog.h"
#include "Utils.h"
using namespace std;
namespace seneca {
   Dog::Dog(const char* name):Animal(name) {
      if (seneca::debug) cout << this->name() << " the dog was creaed" << endl;
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
      if (seneca::debug)cout << name() << "the dog is gone!" << endl;
   }

}

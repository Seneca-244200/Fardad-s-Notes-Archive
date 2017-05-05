#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"

namespace ict{
   Cat::Cat(const char* name, int numOflives):Animal(name), _numOfLives(numOflives){
     // _numOfLives = numOflives;
   }
   void Cat::act() {
      Animal::act();
      cout << "Act playful, " << name() << " the Cat" << endl;
   }
   void Cat::move() {
      cout << "Move like " << name() << " the Cat" << endl;
   }
   void Cat::sound() {
      cout << name() << " says Meow!" << endl;
   }
   Cat::~Cat() {
      cout << "Killing " << name() << " the Cat with "
         << _numOfLives << " lives" << endl;
   }
}
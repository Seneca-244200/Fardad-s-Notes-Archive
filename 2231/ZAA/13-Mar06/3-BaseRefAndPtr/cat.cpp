#include <iostream>
using namespace std;
#include "Cat.h"
namespace sdds {
   Cat::Cat(const char* thename, int numOfLives):Animal(thename), m_numOfLives(numOfLives){
     if (sdds::debug) cout << "as a cat with " << m_numOfLives << " lives" << endl;
   }
   void Cat::act() {
      cout << "Act playful, " << name() << " the Cat" << endl;
   }
   void Cat::move() {
      cout << "Move like " << name() << " the Cat" << endl;
   }
   void Cat::sound() {
      Animal::sound();
      cout << "Meow!" << endl;
   }
   void Cat::play() {
      cout << name() << " the cat is playing!" << endl;
   }
   Cat::~Cat() {
      if (sdds::debug) cout << "Removing " << name() << " the Cat" << endl;
   }

}
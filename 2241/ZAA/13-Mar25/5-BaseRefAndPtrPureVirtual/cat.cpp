#include <iostream>
#include "Utils.h"
#include "Cat.h"
using namespace std;

namespace sdds {
   Cat::Cat(const char* thename, int numOfLives):Animal(thename), m_numOfLives(numOfLives){
 //     m_numOfLives = numOfLives;
     if(sdds::debug) cout << "Creating " << name() << " the Cat with " << m_numOfLives << " lives"   << endl;
   }
   void Cat::act() {
      cout << "Act playful, " << name() << " the Cat" << endl;
   }
   void Cat::move() {
      cout << "Move like " << name() << " the Cat" << endl;
   }
   void Cat::sound() {
      cout << "Meow!" << endl;
   }
   Cat::~Cat() {
      if (sdds::debug) cout << "Removing " << name() << " the Cat" << endl;
   }

}
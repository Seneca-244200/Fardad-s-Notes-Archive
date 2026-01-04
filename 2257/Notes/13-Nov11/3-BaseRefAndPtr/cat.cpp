#include <iostream>
using namespace std;
#include "Utils.h"
#include "Cat.h"
namespace seneca {
   Cat::Cat(const char* thename, int numOfLives):Animal(thename), m_numOfLives(numOfLives){
     if (seneca::debug) cout << "as a cat with " << m_numOfLives << " lives" << endl;
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
      if (seneca::debug) cout << "Removing " << name() << " the Cat" << endl;
   }

}
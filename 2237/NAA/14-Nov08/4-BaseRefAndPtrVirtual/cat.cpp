#include <iostream>
using namespace std;
#include "Utils.h"
#include "Cat.h"
namespace sdds {
   Cat::Cat(const char* thename, int numOfLives):Animal(thename), m_numOfLives(numOfLives){
 //     m_numOfLives = numOfLives;
     if(sdds::debug) cout << "Creating " << name() << " the Cat with " << m_numOfLives << " lives"   << endl;
   }
   void Cat::act()const {
      cout << "Act playful, " << name() << " the Cat" << endl;
   }
   void Cat::move()const {
      cout << "Move like " << name() << " the Cat" << endl;
   }
   void Cat::sound()const {
      cout << "Meow! ";
      Animal::sound();
   }
   Cat::~Cat() {
      if (sdds::debug) cout << "Removing " << name() << " the Cat" << endl;
   }

}
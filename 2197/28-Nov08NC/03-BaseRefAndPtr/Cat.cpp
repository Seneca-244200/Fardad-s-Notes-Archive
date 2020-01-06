#include <iostream>
#include <cstring>
using namespace std;
#include "Cat.h"

namespace sdds{
   Cat::Cat(const char* name, int nol) :Animal(name), m_numOfLives(nol){
      cout << "Creating " << this->name() << " the Cat, with "
         << m_numOfLives << " lives!" << endl;
   }
   Cat::~Cat(){
      cout << "Removing " << name() << " the Cat with " << m_numOfLives << " lives left!" << endl;
   }
   void Cat::act()const {
      Animal::move();
      cout << "Act playful, " << name() << " the Cat" << endl;
   }

   void Cat::sound()const {
      cout << name() << "says Meow!" << endl;
   }
 
}
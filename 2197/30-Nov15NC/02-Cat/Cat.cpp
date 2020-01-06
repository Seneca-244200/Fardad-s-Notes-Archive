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
      cout << "Act playful, " << name() << " the Cat" << endl;
   }
   void Cat::move()const {
      Animal::move();
      cout << "Move like " << name() << " the Cat" << endl;
   }
 
 
}
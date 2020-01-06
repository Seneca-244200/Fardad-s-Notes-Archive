#include <iostream>
#include <cstring>
using namespace std;
#include "Cat.h"

namespace sdds{
   Cat::Cat(const char* name, int nol) 
      :Animal(name), m_numOfLives(nol) {}
   void Cat::act()const{
      cout << "Act playful, " << name() << " the Cat" << endl;
   }
   void Cat::move()const {
      Animal::move();
      cout << "Move like " << name() << " the Cat" << endl;
   }
   void Cat::sound()const {
      cout << "Meow " << name() << " the Cat" << endl;
   }
}
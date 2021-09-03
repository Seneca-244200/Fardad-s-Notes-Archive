#include <iostream>
using namespace std;
#include "Cat.h"
namespace sdds {
   Cat::Cat(const char* thename, int numOfLives)
      :Animal(thename), m_numOfLives(numOfLives) /* here we initialize */{
      //m_numOfLives = numOfLives; these are not initialization anymore, this is just setting the value;
      // name(thename);
      if(sdds::debug) cout << "Creating " << name() << " the Cat with " << m_numOfLives << " lives"   << endl;
   }
   void Cat::act() {
      cout << "Act playful, " << name() << " the Cat" << endl;
   }
 /*  void Cat::move() {
      cout << "Move like " << name() << " the Cat" << endl;
   }*/
   void Cat::sound() {
      Animal::sound();
      cout << "Meow!" << endl;
   }
   Cat::~Cat() {
      if (sdds::debug) cout << "Removing " << name() << " the Cat" << endl;
   }

}
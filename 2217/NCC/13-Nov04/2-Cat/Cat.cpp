#include <iostream>
using namespace std;
#include "Cat.h"
namespace sdds {
   //Cat::Cat(const char* thename, int numOfLives)  {
   //  // default the animal
   //   name(thename);  // setting the name
   //   m_numOfLives = numOfLives;  // the lives
   //   if(sdds::debug) cout << "Creating " << name() 
   //      << " the Cat with " << m_numOfLives << " lives"   << endl;
   //}
   Cat::Cat(const char* thename, int numOfLives):
      // initialize the animal with name, and initialize the lives.
          Animal(thename), m_numOfLives(numOfLives){
      if (sdds::debug) cout << "Creating " << name()
         << " the Cat with " << m_numOfLives << " lives" << endl;
   }
   void Cat::act() {
      cout << "Act playful, " << name() << " the Cat" << endl;
   }
 /*  void Cat::move() {
      cout << "Move like " << name() << " the Cat" << endl;
   }*/
   void Cat::sound() {
      Animal::sound(); // invoking Animal classe's sound() method
      cout << "Meow!" << endl;
   }
   void Cat::play() {
      cout << name() << " the cat is playing " << endl;
   }
   Cat::~Cat() {
      if (sdds::debug) cout << "Removing " << name() << " the Cat" << endl;
   }

}
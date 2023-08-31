#include <iostream>
using namespace std;
#include "Cat.h"
namespace sdds {
   //Cat::Cat(const char* thename, int numOfLives) {
   // //   Animal will be defaulted before being set to thename
   //   name(thename);  // setting the name
   //   m_numOfLives = numOfLives;  // the lives
   //   if (sdds::debug) cout << "Creating " << name()
   //      << " the Cat with " << m_numOfLives << " lives" << endl;
   //}

   /* requests can be made in the initialization area (that is 
      the space between the ")" of the constructor and the "{" where
      the body of the constructor begins) to build the object constructors
      of different parts*/

////   Cat::Cat(const char* thename, int numOfLives) :Animal(thename), m_numOfLives(numOfLives) {
//   Cat::Cat(const char* thename, int numOfLives) :
//   /* Initialization area*/   Animal{thename}, m_numOfLives{numOfLives} 
//   /*body begins here*/    {
//         // Animal(thename); does not initialize but creates a 
//      // temp nameless animal
//      //m_numOfLives = numOfLives;  // the lives
//      if (sdds::debug) cout << "as a cat with " << m_numOfLives << " lives" << endl;
//   }

   Cat::Cat() : 
      Animal( "Garfield" ), 
      m_numOfLives{ 9 } {
      if(debug) cout << " as defaulted cat with " 
                     << m_numOfLives << " lives" << endl;
   }

   Cat::Cat( const char* thename, int numOfLives ) 
      : Animal{ thename }, m_numOfLives{ numOfLives }
   {
      if (sdds::debug) cout << " as a cat with " << m_numOfLives << " lives" << endl;
   }

   void Cat::act() {  // shadows the Animals act;
      cout << "Act playful, " << name() << " the Cat" << endl;
   }
 /*  void Cat::move() {
      cout << "Move like " << name() << " the Cat" << endl;
   }*/

   void Cat::sound() {
      cout << "Meow!!!!! ";
      Animal::sound(); // invoking Animal classe's sound() method
   }
   void Cat::play() {
      cout << name() << " the cat is playing " << endl;
   }
   Cat::~Cat() {
      if (sdds::debug) cout << "Removing " << name() << " the Cat" << endl;
   }
}
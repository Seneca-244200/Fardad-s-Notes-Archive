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

   Cat::Cat(): Animal("Garfield"), m_numOfLives{9} {
//      Animal("Garfield"); this attempt will not set currect 
//             object, but only creates a temp Animal with the name
//             Garfield and kills is right after
//      m_numOfLives = 9;
      cout << "as defaulted cat with " << m_numOfLives << " lives" << endl;
   }

   Cat::Cat( const char* thename, int numOfLives ) : Animal{ thename }, m_numOfLives{ numOfLives }
   {
     
      if (sdds::debug) cout << "as a cat with " << m_numOfLives << " lives" << endl;
      //m_name[0] = char(0); private properties of parents are not accessible
   }

   void Cat::act() {  // shadows the Animals act;
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
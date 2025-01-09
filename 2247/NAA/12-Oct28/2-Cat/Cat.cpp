#include <iostream>
using namespace std;
#include "Utils.h"
#include "Cat.h"
namespace sdds {
   //Cat::Cat( ) {
   //   name( "Garfield" );
   //   m_numOfLives = 9;
   //   cout << "    as defaulted cat with " << m_numOfLives << " lives!" << endl;
   //}

   Cat::Cat():m_numOfLives{9} {
      name( "Garfield" );
      if(sdds::debug )
         cout << "    as defaulted cat with " << m_numOfLives << endl;
   }

   Cat::Cat(const char* thename, int numOfLives)
      : Animal(thename), m_numOfLives{numOfLives}
   {
     
      if (sdds::debug) cout << "    as a cat with " << m_numOfLives << " lives" << endl;
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
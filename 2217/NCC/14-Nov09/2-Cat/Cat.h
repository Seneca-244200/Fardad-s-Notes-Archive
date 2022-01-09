#pragma once
#include "Animal.h"
namespace sdds {
   // : public   (is)
   class Cat : public Animal {
      int m_numOfLives;
   public:
      Cat(const char* name=  "Garfield",
        int numOfLives = 9);
      void act(); // overriding the base method
     // void move();
      void sound(); // overriding the base method
      ~Cat();
   };
}


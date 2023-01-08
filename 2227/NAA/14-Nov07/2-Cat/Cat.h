#pragma once
#include "Animal.h"
namespace sdds {

   // A cat IS an Animal
   // : public   (is)
   class Cat : public Animal {
      // A cat HAS number of lives
      int m_numOfLives;
   public:
      Cat(const char* name=  "Garfield",
        int numOfLives = 9);
      void act();
     // void move();
      void sound();
      void play();
      ~Cat();
   };
}


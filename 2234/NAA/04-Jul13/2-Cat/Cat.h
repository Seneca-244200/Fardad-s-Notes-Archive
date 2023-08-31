#pragma once
#include "Animal.h"
namespace sdds {

   // A cat IS an Animal
   // : public   (is)
   class Cat : public Animal {
      // A cat HAS number of lives
      int m_numOfLives;
   public:
      Cat();
      Cat(const char* name,
        int numOfLives);
      void act();
     // void move();
      void sound();
      void play();
      ~Cat();
   };
}


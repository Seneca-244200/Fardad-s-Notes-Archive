#pragma once
#include "Animal.h"
namespace seneca {
   class Cat : public Animal {
      int m_numOfLives;
   public:
      Cat(const char* name=  "Garfield",
        int numOfLives = 9);
      void act()const;
      void move()const;
      void sound()const;
      ~Cat();
   };
}


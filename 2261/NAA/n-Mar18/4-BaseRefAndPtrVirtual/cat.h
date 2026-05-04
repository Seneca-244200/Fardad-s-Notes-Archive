#pragma once
#include "Animal.h"
namespace seneca {
   class Cat : public Animal {
      int m_numOfLives;
   public:
      Cat(const char* name=  "Garfield",
        int numOfLives = 9);
      void act()const; // the act here is virtual too even if not stated as such
      void move()const;
      void sound()const;// the sound is virtual too. 
      ~Cat();
   };
}


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
      void act(); // override Base's act()
     // void move();
      void sound();  // overrides Bases sound();
      void sound(int num); // overloads Bases sound();
      void play();  // creat new method
      ~Cat();
   };
}


#pragma once
#include "Animal.h"
namespace sdds {
   class Dog : public Animal {
   public:
      Dog(const char* name = "Milou");
      void act();
      void move();
      void sound();
      ~Dog();
   };
}
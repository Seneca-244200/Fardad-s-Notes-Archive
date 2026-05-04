#pragma once
#include "Animal.h"
namespace seneca {
   class Dog : public Animal {
   public:
      Dog(const char* name = "Milou");
      void act();
      void move();
      void sound();
      ~Dog();
   };
}
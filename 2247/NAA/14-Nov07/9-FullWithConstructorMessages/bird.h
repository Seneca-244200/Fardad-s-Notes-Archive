#ifndef SENECA_BIRD_H
#define SENECA_BIRD_H
#include "pet.h"
namespace seneca{
  class Bird:public Pet{
  public:
    Bird(const char* name = "Nameless");
    void act()const;
    void move()const;
    virtual void fly()const = 0;
    void sound()const;
    ~Bird();
  };
}
#endif
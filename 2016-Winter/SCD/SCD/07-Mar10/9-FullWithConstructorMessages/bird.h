#ifndef SICT_BIRD_H__
#define SICT_BIRD_H__
#include "pet.h"
namespace sict{
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
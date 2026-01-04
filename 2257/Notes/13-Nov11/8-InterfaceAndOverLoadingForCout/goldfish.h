#ifndef SENECA_GOLDFISH_H__
#define SENECA_GOLDFISH_H__
#include "pet.h"
namespace seneca{
  class GoldFish:public Pet{
  public:
    GoldFish(const char* name = "Cleo");
    void act()const;
    void move()const;
    void sound()const;
    void swim()const;
    ~GoldFish();
  };
}
#endif
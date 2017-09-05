#ifndef SICT_GOLDFISH_H__
#define SICT_GOLDFISH_H__
#include "pet.h"
namespace sict{
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
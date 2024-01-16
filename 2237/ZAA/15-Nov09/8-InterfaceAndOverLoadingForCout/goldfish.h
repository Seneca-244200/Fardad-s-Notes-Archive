#ifndef SDDS_GOLDFISH_H__
#define SDDS_GOLDFISH_H__
#include "pet.h"
namespace sdds{
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
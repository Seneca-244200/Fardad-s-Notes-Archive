#ifndef __FS_GOLDFISH_H__
#define __FS_GOLDFISH_H__
#include "pet.h"
namespace oop244{
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
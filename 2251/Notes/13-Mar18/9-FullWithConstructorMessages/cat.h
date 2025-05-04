#ifndef SDDS_CAT_H__
#define SDDS_CAT_H__
#include "pet.h"
namespace sdds{
  class Cat:public Pet{           
    int _numOfLives;
  public:
    Cat(const char* name = "Garfiled", int numOfLives = 9);
    void act()const;
    void move()const;
    void sound()const;
    ~Cat();
  };
}
#endif
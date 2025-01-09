#ifndef SENECA_CAT_H
#define SENECA_CAT_H
#include "pet.h"
namespace seneca{
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
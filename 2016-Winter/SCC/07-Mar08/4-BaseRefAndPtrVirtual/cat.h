#ifndef SICT_CAT_H__
#define SICT_CAT_H__
#include "animal.h"
namespace sict{
  class Cat:public Animal{           
    int _numOfLives;
  public:
    Cat(const char* name = "Garfiled", int numOfLives = 9);
    void act();
    void move();
    void sound();
    ~Cat();
  };
}
#endif
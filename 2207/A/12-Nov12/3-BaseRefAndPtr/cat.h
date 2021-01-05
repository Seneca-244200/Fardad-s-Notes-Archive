#ifndef SDDS_CAT_H__
#define SDDS_CAT_H__
#include "animal.h"
namespace sdds{
  class Cat:public Animal{           
    int m_numOfLives;
  public:
    Cat(const char* name = "Garfiled", int numOfLives = 9);
    void act();
    void move();
    void sound();
    ~Cat();
  };
}
#endif
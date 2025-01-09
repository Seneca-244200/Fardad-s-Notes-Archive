#ifndef SENECA_CAT_H
#define SENECA_CAT_H
#include "pet.h"
// cat is concrete
namespace seneca{
  class Cat:public Pet{// a concret class since it has no pure virtual method           
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
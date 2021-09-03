#ifndef SDDS_CAT_H__
#define SDDS_CAT_H__
#include "pet.h"
namespace sdds{
  class Cat:public Pet{           
    int m_numOfLives;
  public:
    Cat(const char* name = "Garfiled", int numOfLives = 9);
    void act();
  //  void move();
    void sound();
    ~Cat();
  };
}
#endif
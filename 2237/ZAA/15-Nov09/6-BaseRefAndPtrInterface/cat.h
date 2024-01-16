#ifndef SDDS_CAT_H__
#define SDDS_CAT_H__
#include "pet.h"
// cat is concrete
namespace sdds{
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
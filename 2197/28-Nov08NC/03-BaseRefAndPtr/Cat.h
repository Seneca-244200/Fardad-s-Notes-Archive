#ifndef SDDS_CAT_H__
#define SDDS_CAT_H__
#include "animal.h"
namespace sdds{
  class Cat:public Animal{           
     int m_numOfLives;
  public:
     Cat(const char* name = "Tom", int noOfLives = 9);
     ~Cat();
     void act()const;

     void sound()const;
  };
}
#endif
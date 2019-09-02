#ifndef SICT_CAT_H__
#define SICT_CAT_H__
#include "animal.h"
namespace sict{
  class Cat:public Animal{           
    int m_numOfLives;
  public:
    Cat(const char* name = "Garfiled", 
       int numOfLives = 9);
    void act()const;
   // void move()const;
    void sound()const;
    ~Cat();
  };
}
#endif
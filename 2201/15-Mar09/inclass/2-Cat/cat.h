#ifndef SDDS_CAT_H__
#define SDDS_CAT_H__
#include "animal.h"
namespace sdds{
  class Cat:public Animal{           
     int _numOfLives; // =8; (1)
  public:
    Cat(const char* name = "Tom", 
       int numOfLives = 9);
    void act();
   // void move();
    void sound();
    ~Cat();
  };
}
#endif
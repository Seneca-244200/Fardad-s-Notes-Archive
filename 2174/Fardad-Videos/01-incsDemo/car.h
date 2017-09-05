#ifndef _244_CAR_H_
#define _244_CAR_H_

#include "engine.h"
#include <iostream>
namespace oop244{
  class Car{
    char _makeModel[41];
    Engine _engine;
  public:
    Car(const char* makeModel, const char* engineType, 
              int NoOfCylenders, double hoursePower);
    std::ostream& display(std::ostream& os)const;
  };
  std::ostream& operator<<(std::ostream& os, const Car& C);
}

#endif
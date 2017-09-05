#ifndef _244_ENGINE_H_
#define _244_ENGINE_H_

#include <iostream>
namespace oop244{
  class Engine{
    char _type[41];
    int _noOfCylenders;
    double _hoursePower;
  public:
    Engine(const char* type, int noOfCylenders, double hoursePower);
    std::ostream& display(std::ostream& os)const;
  };
  std::ostream& operator<<(std::ostream& os, const Engine& E);
}

#endif
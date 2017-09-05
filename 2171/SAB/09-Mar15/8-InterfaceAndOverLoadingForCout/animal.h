#ifndef SICT_ANIMAL_H__
#define SICT_ANIMAL_H__
namespace sict{
#include <iostream>
  class Animal{
  public:
    virtual void act()const = 0;
    virtual void move()const = 0;
    virtual void sound()const = 0;
  };
  std::ostream& operator<<(std::ostream& OS, const Animal& A);
}
#endif
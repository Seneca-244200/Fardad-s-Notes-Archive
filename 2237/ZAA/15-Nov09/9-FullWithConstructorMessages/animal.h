#ifndef SDDS_ANIMAL_H__
#define SDDS_ANIMAL_H__
#include <iostream>
namespace sdds{
  class Animal{
  public:
    virtual void act()const = 0;
    virtual void move()const = 0;
    virtual void sound()const = 0;
  };

  std::ostream& operator<<(std::ostream& OS, const Animal& A);

}
#endif
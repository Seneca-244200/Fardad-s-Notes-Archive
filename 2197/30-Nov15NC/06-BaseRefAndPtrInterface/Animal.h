#ifndef SDDS_ANIMAL_H__
#define SDDS_ANIMAL_H__
#include <iostream>
namespace sdds {
  class Animal {
  public:
    virtual void act()const = 0;
    virtual void move()const = 0;
    virtual void sound()const = 0;
    virtual ~Animal();
    virtual std::ostream& display(std::ostream& os = std::cout)const = 0;
    virtual std::istream& read(std::istream& is = std::cin) = 0;
  };
std::ostream& operator<<(std::ostream& os, const Animal& toBePrinted);
std::istream& operator>>(std::istream& is, Animal& toBeRead);
}

#endif
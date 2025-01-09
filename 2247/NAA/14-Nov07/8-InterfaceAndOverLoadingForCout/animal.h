#ifndef SENECA_ANIMAL_H
#define SENECA_ANIMAL_H
#include <iostream>
namespace seneca{
  class Animal{
  public:
    virtual void act()const = 0;
    virtual void move()const = 0;
    virtual void sound()const = 0;
    virtual ~Animal() = default;
  };

  std::ostream& operator<<(std::ostream& OS, 
                           const Animal& A);

}
#endif
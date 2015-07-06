#ifndef __FS_ANIMAL_H__
#define __FS_ANIMAL_H__
#include <iostream>
namespace oop244{
  class Animal{
  public:
    virtual void act()const = 0;
    virtual void move()const = 0;
    virtual void sound()const = 0;
  };

  std::ostream& operator<<(std::ostream& OS, const Animal& A);

}
#endif
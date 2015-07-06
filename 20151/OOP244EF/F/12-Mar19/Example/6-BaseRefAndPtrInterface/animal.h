#ifndef __FS_ANIMAL_H__
#define __FS_ANIMAL_H__
namespace oop244{
  class Animal{
  public:
    virtual void act() = 0;
    virtual void move() = 0;
    virtual void sound() = 0;
  };

}
#endif
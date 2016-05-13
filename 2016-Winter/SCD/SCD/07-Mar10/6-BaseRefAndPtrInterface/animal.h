#ifndef SICT_ANIMAL_H__
#define SICT_ANIMAL_H__
namespace sict{
  class Animal{
  public:
    virtual void act() = 0;
    virtual void move() = 0;
    virtual void sound() = 0;
  };

}
#endif
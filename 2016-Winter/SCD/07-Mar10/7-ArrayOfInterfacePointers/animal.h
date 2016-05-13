#ifndef SICT_ANIMAL_H__
#define SICT_ANIMAL_H__
namespace sict{
  class Animal{
  public:
    virtual void act()const = 0;
    virtual void move()const = 0;
    virtual void sound()const = 0;
  };

}
#endif
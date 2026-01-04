#ifndef SENECA_ANIMAL_H__
#define SENECA_ANIMAL_H__
namespace seneca{
   // in OOP: Animal Interface
  class Animal{
  public:
    virtual void act()const = 0;
    virtual void move()const = 0;
    virtual void sound()const = 0;
    virtual ~Animal(){ }
  };

}
#endif
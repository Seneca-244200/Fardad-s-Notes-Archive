#ifndef SDDS_ANIMAL_H__
#define SDDS_ANIMAL_H__
namespace sdds{
  class Animal{
    char _name[41];
  public:
    Animal(const char* name = "Nameless");
    const char* name()const; 
    void name(const char* value); 
    virtual void act() = 0;
    void move();
    virtual void sound();
    virtual ~Animal();
  };





}
#endif
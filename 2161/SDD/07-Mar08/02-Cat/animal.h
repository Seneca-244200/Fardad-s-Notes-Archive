#ifndef SICT_ANIMAL_H__
#define SICT_ANIMAL_H__
namespace sict{
  class Animal{
    char _name[41];
  protected:
    void move();
  public:
    Animal(const char* name = "Nameless");
    const char* name()const; 
    void name(const char* value); 
    void act();

    void sound();
    ~Animal();
  };



}
#endif
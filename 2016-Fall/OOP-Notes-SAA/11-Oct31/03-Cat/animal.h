#ifndef ICT_ANIMAL_H__
#define ICT_ANIMAL_H__
namespace ict{
  class Animal{
    char _name[41];
  public:
    Animal(const char* name);
    const char* name()const; 
    void name(const char* value); 
    void act();
    void move();
    void sound();
    ~Animal();
  };



}
#endif
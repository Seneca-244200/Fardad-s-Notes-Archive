#ifndef ICT_ANIMAL_H__
#define ICT_ANIMAL_H__
namespace ict{
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
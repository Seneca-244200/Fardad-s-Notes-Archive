#ifndef __FS_ANIMAL_H__
#define __FS_ANIMAL_H__
namespace oop244{
  class Animal{
    char _name[41];
  public:
    Animal(const char* name = "Nameless");
    const char* name()const; 
    void name(const char* value); 
    void act();
    void move();
    void sound();
    ~Animal();
  };



 


}
#endif
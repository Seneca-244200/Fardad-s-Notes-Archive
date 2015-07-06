#ifndef __FS_ANIMAL_H__
#define __FS_ANIMAL_H__
namespace oop244{
  class Animal{
    char _name[41];
  public:
    Animal(const char* name = "Nameless");
    const char* name()const; 
    void name(const char* value); 
    virtual void act();
    void move();
    virtual void sound();
    ~Animal();
  };



  void prn(const char* m1, const char* m2 = "", const char* m3 = "", const char* m4 = "");


}
#endif
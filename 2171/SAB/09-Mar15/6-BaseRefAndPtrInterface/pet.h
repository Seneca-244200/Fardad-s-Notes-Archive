#ifndef SICT_PET_H__
#define SICT_PET_H__
#include "animal.h"

namespace sict{
  class Pet:public Animal{
    char _name[41];
  public:
    Pet(const char* name = "Nameless");
    const char* name()const;
    void name(const char* value);
    void move();
    void sound();
    ~Pet();
  };



  void prn(const char* m1, const char* m2 = "", const char* m3 = "", const char* m4 = "");


}
#endif
#ifndef SENECA_PET_H
#define SENECA_PET_H
#include "animal.h"

namespace seneca{
  class Pet:public Animal{
    char m_name[41];
  protected:
     const char* name()const;
     void name(const char* value);
  public:
    Pet(const char* name = "Nameless");
    void move()const;
    void sound()const;
    ~Pet();
  };



  void prn(const char* m1, const char* m2 = "", const char* m3 = "", const char* m4 = "");


}
#endif
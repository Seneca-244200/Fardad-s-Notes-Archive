#ifndef SDDS_PET_H__
#define SDDS_PET_H__
#include "animal.h"

namespace sdds{
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
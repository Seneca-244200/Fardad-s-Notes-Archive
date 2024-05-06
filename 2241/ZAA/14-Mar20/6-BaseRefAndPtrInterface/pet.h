#ifndef SDDS_PET_H__
#define SDDS_PET_H__
#include "animal.h"

namespace sdds{
  class Pet:public Animal{ // abstract base class since act has no overrider
    char m_name[41];
  protected:
     const char* name()const;
     void name(const char* value);
  public:
     Pet(const char* name = "Nameless");
    void move();
    void sound();
    ~Pet();
  };






}
#endif
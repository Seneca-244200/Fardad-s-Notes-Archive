#ifndef SDDS_PET_H__
#define SDDS_PET_H__
#include "animal.h"

namespace sdds{
  class Pet:public Animal{ // abstract base class since act has no overrider
    char m_name[41];
  public:
    Pet(const char* name = "Nameless");
    const char* name()const;
    void name(const char* value);
    
    void move();
    void sound();
    ~Pet();
  };







}
#endif
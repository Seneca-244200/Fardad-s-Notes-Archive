#ifndef SDDS_PET_H__
#define SDDS_PET_H__
#include "Animal.h"
namespace sdds {
  class Pet: public Animal {
    char* m_name;
  public:
    Pet(const char* name = "");
    virtual ~Pet();
    Pet(const Pet&) = delete;
    Pet& operator=(const Pet&) = delete;
    void name(const char* value);
    const char* operator=(const char* name);
    operator bool()const;
    const char* name()const;
    void setEmpty();
    bool isEmpty()const;

    void move()const;
    void act()const;
    void sound()const;
    
    std::ostream& display(std::ostream& os = std::cout)const;
    std::istream& read(std::istream& is = std::cin);
  };
}

#endif
#ifndef SICT_PET_H__
#define SICT_PET_H__
#include "Animal.h"
namespace sict {
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
    virtual void sound()const;
    
    std::ostream& display(std::ostream& os = std::cout)const;
    std::istream& read(std::istream& is = std::cin);
  };
std::ostream& operator<<(std::ostream& os, const Pet  & toBePrinted);
std::istream& operator>>(std::istream& is, Pet& toBeRead);
}

#endif
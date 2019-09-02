#ifndef SICT_ANIMAL_H__
#define SICT_ANIMAL_H__

namespace sict {
  class Animal {
    char* m_name;
  public:
    Animal(const char* name = "");
    virtual ~Animal();
    Animal(const Animal&) = delete;
    Animal& operator=(const Animal&) = delete;
    void name(const char* value);
    const char* operator=(const char* name);
    operator bool()const;
    const char* name()const;
    void setEmpty();
    bool isEmpty()const;


    virtual void act()const = 0;
    void move()const;
    virtual void sound()const;
    
    std::ostream& display(std::ostream& os = std::cout)const;
    std::istream& read(std::istream& is = std::cin);
  };
std::ostream& operator<<(std::ostream& os, const Animal& toBePrinted);
std::istream& operator>>(std::istream& is, Animal& toBeRead);
}

#endif
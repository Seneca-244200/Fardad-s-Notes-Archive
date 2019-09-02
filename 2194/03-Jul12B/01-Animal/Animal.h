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
    void operator=(const char* name);
    operator bool()const;
    const char* name()const;
    void setEmpty();
    bool isEmpty()const;
    void act()const;
    void move()const;
    void sound()const;
  };
}

#endif
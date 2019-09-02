#ifndef SICT_ANIMAL_H__
#define SICT_ANIMAL_H__

namespace sict {
  class Animal {
    char* m_name;
  public:
    Animal(const char* name = "");
    Animal(const Animal&) = delete;
    Animal& operator=(const Animal&) = delete;
    void name(const char* value);
    const char* name()const;
    void setEmpty();
    bool isEmpty()const;
    void act()const;
    void move()const;
    void sound()const;
  };
}

#endif
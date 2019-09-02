#ifndef SICT_CONTAINER_H__
#define SICT_CONTAINER_H__
#include <iostream>

class Container {
  char m_name[256];
  int m_value;
public:
  Container(int value = 0, const char* name = "Container");
  int value()const;
  void value(int thevalue);
  const char* name()const;
  void name(const char* newName);
  // good implementation for C + 10;
  Container operator+(int Ro)const;
  Container& operator+=(const char* str2Attach);
  std::ostream& display(std::ostream& os = std::cout)const;
  std::istream& read(std::istream& is = std::cin);
  void operator~()const;
  Container& operator++();
  Container operator++(int);
  operator int()const;
  operator const char*()const;
};

// Bad implementation of C + 10
//Container operator+(const Container& LO, int Ro);
Container operator+(int LO, const Container& RO);

std::ostream& operator<<(std::ostream& LO, const Container& RO);
std::istream& operator>>(std::istream& LO, Container& RO);
#endif

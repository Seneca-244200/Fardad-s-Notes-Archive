#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "Animal.h"
namespace sict {
  Animal::Animal(const char* name):m_name(nullptr){
    // m_name = nullptr; this is setting and NOT initialization
    this->name(name);
  }
  const char* Animal::name()const {
    return m_name;
  }
  void Animal::name(const char* value) {
    delete[] m_name;
    if (value) {
      m_name = new char[strlen(value) + 1];
      //m_name = new char[strlen(value+1)]; // what happens if I do this by mistake? research
      strcpy(m_name, value);
    }
    else {
      setEmpty();
    }
  }

}
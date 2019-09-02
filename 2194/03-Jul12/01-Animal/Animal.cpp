#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "Animal.h"
using namespace std;
namespace sict {
  Animal::Animal(const char* name):m_name(nullptr){
    // m_name = nullptr; this is setting and NOT initialization
    this->name(name);
    cout << "Creating " << this->name() << " the Animal" << endl;
  }
  Animal::~Animal() {
    cout << "Removing " << name() << " the animal" << endl;
    setEmpty();
  }
  const char* Animal::name()const {
    return m_name;
  }
  const char* Animal::operator=(const char* thename) {
    name(thename);
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
  void Animal::setEmpty() {
    delete[] m_name;
    m_name = nullptr;
  }
  bool Animal::isEmpty()const {
    return m_name == nullptr;
  }
  void Animal::act()const {
    cout << "Act like " << name() << " the animal" << endl;
  }
  void Animal::move()const {
    cout << "Move like " << name() << " the animal" << endl;
  }
  void Animal::sound()const {
    cout << "Sound like " << name() << " the animal" << endl;
  }
  std::ostream& Animal::display(std::ostream& os)const {
    return os << name() << " the animal";
  }
  std::istream& Animal::read(std::istream& is) {
    char thename[256];
    cin.getline(thename, 255, '\n');
    name(thename);
    return is;
  }
  std::ostream& operator<<(std::ostream& os, const Animal& rightOperand) {
    return rightOperand.display(os);
  }
}
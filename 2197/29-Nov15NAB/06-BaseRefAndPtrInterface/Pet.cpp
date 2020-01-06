#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Pet.h"
using namespace std;
namespace sdds {
  Pet::Pet(const char* name):m_name(nullptr){
    // m_name = nullptr;// this is setting and NOT initialization
    this->name(name);
    cout << "Creating " << this->name() << " the Pet" << endl;
  }
  Pet::~Pet() {
    if (!isEmpty())
      cout << "Removing " << name() << " the pet" << endl;
    else
      cout << "Removing the empty pet" << endl;
    setEmpty();
  }
  const char* Pet::name()const {
    return m_name;
  }
  const char* Pet::operator=(const char* value) {
    name(value);
    return name();
  }
  Pet::operator bool()const {
    return !isEmpty();
  }
  void Pet::name(const char* value) {
    delete[] m_name;
    if (value) { 
      m_name = new char[strlen(value) + 1];
      strcpy(m_name, value);
    }
    else {
      setEmpty();
    }
  }
  void Pet::setEmpty() {
    delete[] m_name;
    m_name = nullptr;
  }
  bool Pet::isEmpty()const {
    return m_name == nullptr;
  }

  void Pet::move()const {
    cout << "Move like " << name() << " the pet" << endl;
  }
  void Pet::act()const {
     cout << "Move like " << name() << " the pet" << endl;
  }
  void Pet::sound()const {
    cout << "Sound like " << name() << " the pet" << endl;
  }
  std::ostream& Pet::display(std::ostream& os)const {
    return os << name() << " the pet";
  }
  std::istream& Pet::read(std::istream& is) {
    char thename[256];
    cin.getline(thename, 255, '\n');
    name(thename);
    return is;
  }

}
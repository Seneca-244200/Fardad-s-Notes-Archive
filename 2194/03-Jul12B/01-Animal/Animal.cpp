#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Animal.h"
using namespace std;
namespace sict {
  Animal::Animal(const char* name):m_name(nullptr){
    // m_name = nullptr;// this is setting and NOT initialization
    this->name(name);
    cout << "Creating " << this->name() << " the Animal" << endl;
  }
  Animal::~Animal() {
    if (!isEmpty())
      cout << "Removing " << name() << " the animal" << endl;
    else
      cout << "Removing the empty animal" << endl;
    setEmpty();
  }
  const char* Animal::name()const {
    return m_name;
  }
  void Animal::operator=(const char* value) {
    name(value);
  }
  Animal::operator bool()const {
    return !isEmpty();
  }
  void Animal::name(const char* value) {
    delete[] m_name;
    if (value) { // if(value != nullptr){
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
}
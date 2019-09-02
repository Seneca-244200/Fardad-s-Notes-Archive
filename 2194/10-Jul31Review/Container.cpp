#include <iostream>
#include <cstring>

#include "Container.h"
using namespace std;
Container::Container(int thevalue, const char* thename) {
  value(thevalue);
  name(thename);
}
int Container::value()const {
  return m_value;
}
void Container::value(int thevalue) {
  m_value = thevalue;
}
const char* Container::name()const {
  return m_name;
}
void Container::name(const char* newName) {
  strncpy(m_name, newName, 255);
  m_name[255] = 0;  // = '/0';
}
// good implementation for C + 10;
Container Container::operator+(int Ro)const {
  return Container(this->value() + Ro, this->name());
}
Container& Container::operator+=(const char* str2Attach) {
  strncat(m_name, str2Attach, 255 - strlen(m_name));
  m_name[255] = 0;  // = '/0';
  return *this;
}
void Container::operator~()const {
  display() << endl;
}
Container::operator int()const {
  return value();
}
Container::operator const char*()const {
  return name();
}
Container& Container::operator++() {
  m_value++;
  return *this;
}
Container Container::operator++(int) {
  Container copy = *this;
  m_value++;
  return copy;
}

ostream& Container::display(ostream& os)const {
  return os << name() << ": " << value();
}
istream& Container::read(istream& is) {
  cout << "Name: ";
  is.getline(m_name, 255);
  cout << "Value: ";
  return is >> m_value;
}

// Bad implementation of C + 10
//Container operator+(const Container& LO, int Ro) { 
//  return Container(LO.value() + Ro, LO.name());
//}

Container operator+(int LO, const Container& RO){
  return Container(RO.value() + LO, RO.name());
}

ostream& operator<<(ostream& LO, const Container& RO) { 
  return RO.display(LO);
}

istream& operator>>(istream& LO, Container& RO) {
  return RO.read(LO);
}
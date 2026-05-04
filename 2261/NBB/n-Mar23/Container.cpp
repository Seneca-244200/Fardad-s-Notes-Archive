#include <iostream>
#include "Container.h"
using namespace std;
int Container::value() const {
   return m_value;
}

Container::Container(int value) :m_value(value) {};

Container Container::operator+(const Container& other)const {
   return Container(m_value + other.value());
}

ostream& operator<< (ostream& ostr, const Container& C) {
   return ostr << "Container(" << C.value() << ")";
}

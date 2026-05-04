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

int Container::compare(const Container& other) const {
   int ret = 0;
   if (m_value > other.m_value) ret = 1;
   if (m_value < other.m_value) ret = -1;

   return ret;
}

ostream& operator<< (ostream& ostr, const Container& C) {
   return ostr << "Container(" << C.value() << ")";
}

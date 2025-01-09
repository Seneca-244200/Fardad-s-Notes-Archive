#include <iostream>
#include "Num.h"
using namespace std;
namespace sdds {
bool Num::isZero() const {
return m_value == 0;
}
int Num::value() const { // const query
return m_value;
}
Num::Num(int value) {
m_value = value;
}
Num Num::operator+(int righOperand) const {
return Num(m_value + righOperand); // when returning objects by value
                                   // temp names objects are OK:
}

Num Num::operator+(const Num& rightOperand) const {
return Num(m_value + rightOperand.m_value);
}

bool Num::operator!() const {
return isZero();
}

Num& Num::operator++() {
m_value++;
return *this;
}
}

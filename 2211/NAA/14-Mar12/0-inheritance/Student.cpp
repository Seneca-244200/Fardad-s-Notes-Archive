#include <iostream>
#include "Student.h"
Student::Student(const char* name, unsigned int stNo) :Person(name), m_stNo(stNo) {
}
std::ostream& Student::introduce(std::ostream& ostr)const {
   return Person::introduce(ostr) << " and my student number is " << m_stNo;
}
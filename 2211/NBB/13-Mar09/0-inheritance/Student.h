#pragma once
#include "Person.h"
class Student :    // is a person
   public Person {
   unsigned int m_stNo;  // has a student number
public:
   Student(const char* name, unsigned int stNo);
   std::ostream& introduce(std::ostream& ostr = std::cout)const;
};
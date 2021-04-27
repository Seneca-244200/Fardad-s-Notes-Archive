#pragma once
#include "Person.h"

class Student :
   public Person {
   unsigned int m_stNo;
public:
   Student(const char* name, unsigned int stNo);
   std::ostream& introduce(std::ostream& ostr = std::cout)const;
};
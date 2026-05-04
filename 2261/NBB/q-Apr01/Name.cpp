#include <iostream>
#include "cstr.h"
#include "Name.h"
#include "TitledName.h"
Name::Name(const char* name) {
   operator=(name);
}
Name::Name(const Name& other) {
   operator=(other.m_value);
}
Name& Name::operator=(const Name& other) {
   if (this != &other) {
      operator=(other.m_value);
   }
   return *this;
}
Name::~Name() {
   delete[] m_value;
}
Name& Name::operator=(const char* name) {
    // for all the following to be reusable, your data must
    // be in a safe empty state intially 
   // 1- delete current
   delete[] m_value;
   // 2- set current to empty state
   m_value = nullptr;
   // 3- if there is anything to copy
   if (name) {
       //4- allocate to the right size
      m_value = new char[seneca::strlen(name) + 1];
      //5- copy
      seneca::strcpy(m_value, name);
   }
   return *this;
}

const char* Name::get() const {
   return static_cast <const char*>(m_value);
}


std::istream& Name::read(std::istream& istr) {
   char* buffer = new char[512] {};
   istr.getline(buffer, 512);
   if (istr) {
      operator=(buffer);
   }
   delete[] buffer;
   return istr;
}

std::ostream& Name::print(std::ostream& ostr) {
   if (m_value)
      ostr << m_value;
   return ostr;
}





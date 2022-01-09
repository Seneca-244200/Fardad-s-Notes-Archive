#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "Utils.h"
#include "FullName.h"
namespace sdds {
   FullName::FullName(const char* name, const char* lastname) :Name(name) {
      if (name && lastname) {
         Utils::alloCopy(m_lastName, lastname);
         /*m_lastName = new char[strlen(lastname) + 1];
         strcpy(m_lastName, lastname);*/
      }
      else {
         Utils::alloCopy(m_lastName, "");
        /* m_lastName = new char[1];
         m_lastName[0] = '\0';*/
      }
   }

   FullName::FullName(const FullName& fn) :Name(fn) {
      Utils::alloCopy(m_lastName, fn.m_lastName);
      /*m_lastName = new char[strlen(fn.m_lastName) + 1];
      strcpy(m_lastName, fn.m_lastName);*/
   }


   FullName& FullName::operator=(const FullName& fn) {
      if (this != &fn) {
         Name::operator=(fn);
         Utils::alloCopy(m_lastName, fn.m_lastName);
        /* delete[] m_lastName;
         m_lastName = new char[strlen(fn.m_lastName) + 1];
         strcpy(m_lastName, fn.m_lastName);*/
      }
      return *this;
   }

   FullName::~FullName() {
      delete[] m_lastName;
   }

   void FullName::display(std::ostream& ostr) const {
      Name::display(ostr);
      if (m_lastName[0]) {
         ostr << " " << m_lastName;
      }
   }


}
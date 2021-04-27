#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "FullName.h"
using namespace std;
namespace sdds {
   FullName::FullName(const char* firstname, 
      const char* lastname):Name(firstname) {
      if (lastname && firstname) {
         m_lastname = new char[strlen(lastname) + 1];
         strcpy(m_lastname, lastname);
      }
      else {
         m_lastname = new char[1];
         m_lastname[0] = '\0';
      }
   }
   FullName::FullName(const FullName& fn):Name(fn) {
      m_lastname = new char[strlen(fn.m_lastname) + 1];
      strcpy(m_lastname, fn.m_lastname);
   }
   //FullName::FullName(const FullName& fn) {
   //   operator=(fn); // make sure name is copied too
   //}

   FullName& FullName::operator=(const FullName& fn) {
      if (this != &fn) {
         delete[] m_lastname;
         Name::operator=(fn);
         m_lastname = new char[strlen(fn.m_lastname) + 1];
         strcpy(m_lastname, fn.m_lastname);
      }
      return *this;
   }
   ostream& FullName::display(ostream& ostr) const {
      Name::display(ostr);
      if (m_lastname[0]) {
         ostr << " " << m_lastname;
      }
      return ostr;
   }
   FullName::~FullName() {
      delete[] m_lastname;
   }
}

#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "Utils.h"
#include "FullName.h"
using namespace std;
namespace sdds {
   Name FullName::first() const {
    //  return Name(nameValue());
      return Name(Name::nameValue());
   }
   Name FullName::last() const {
      return Name(m_lastname);
   }
   FullName::FullName(const char* first, const char* last):Name(first) {
      m_lastname = ut.alcpy(last?last:"");
      if (sdds_debug) clog << "FC: " << *this << endl;
   }
   //FullName::FullName(const FullName& fn) {
   //   operator=(fn);
   //}
   FullName::FullName(const FullName& fn):Name(fn) {
      m_lastname = ut.alcpy(fn.m_lastname);
      if (sdds_debug) clog << "FCpC: " << *this << endl;
   }
   FullName& FullName::operator=(const FullName& fn) {
      if (this != &fn) {
         if (sdds_debug) clog << "Foperator=: " << *this << endl;
         Name::operator=(fn);
         delete[] m_lastname;
         m_lastname = ut.alcpy(fn.m_lastname);
      }
      return *this;
   }
   FullName::~FullName() {
      if (sdds_debug) clog << "Des: " << *this << endl;
      delete[] m_lastname;
   }
   std::ostream& FullName::display(std::ostream& ostr) const {
      Name::display(ostr);
      if (m_lastname[0]) {
         ostr << " " << m_lastname;
      }
      return ostr;
   }
   std::istream& FullName::read(std::istream& istr) {
      std::cout << "Firstname: ";
      Name::read(istr);
      std::cout << "Lastname: ";
      delete[] m_lastname;
      m_lastname = ut.getDynCstr(istr);
      return istr;
   }
}
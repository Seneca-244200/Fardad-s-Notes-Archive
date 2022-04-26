#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "Utils.h"
#include "Name.h"
using namespace std;
namespace sdds {
   Name::Name(const char* value) {
      if (value) {
         m_value = ut.alcpy(value);
      }
      else {
         m_value = ut.alcpy("");
      }
      if (sdds_debug) clog << "Creating name using *" << m_value << "*" << endl;
   }
   Name::Name(const Name& cp) {
      if (sdds_debug) clog << "Copying the name *" << cp << "*" << endl;
      operator=(cp);
   }
   Name& Name::operator=(const Name& RO) {
      if (this != &RO) {
         delete[] m_value;
         m_value = ut.alcpy(RO.m_value);
      }
      return *this;
   }
   Name::~Name() {
      if (sdds_debug) clog << "Deleting name containing *" << m_value << "*" << endl;
      delete[] m_value;
   }
   ostream& Name::display(std::ostream& ostr) const {
      return ostr << m_value;
   }
   std::istream& Name::read(std::istream& istr) {
      delete[] m_value;
      m_value = ut.getDynCstr(istr);
      return istr;
   }
   const char* Name::value() const {
      return m_value;
   }
   std::ostream& operator<<(std::ostream& ostr, const Name& N) {
      return N.display(ostr);
   }
   std::istream& operator>>(std::istream& istr, Name& N) {
      return N.read(istr);
   }
}
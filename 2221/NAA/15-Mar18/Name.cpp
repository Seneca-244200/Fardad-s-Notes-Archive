#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "Utils.h"
#include "Name.h"
using namespace std;
namespace sdds {
   const char* Name::nameValue() const {
      return m_value;
   }
   Name::Name(const char* value) {
       if (value)
          m_value = ut.alcpy(value);
       else
          m_value = ut.alcpy("");
       if (sdds_debug) clog << "C: " << *this << endl;
    }
    Name::Name(const Name& cp) {
       if (sdds_debug) clog << "CpC: " << cp << endl;
       operator=(cp);
    }
    Name& Name::operator=(const Name& RO) {
       if (this != &RO) {
          if (sdds_debug) clog << "operator=: " << (m_value?m_value:"nothing") << endl ;
          delete[] m_value;
          m_value = ut.alcpy(RO.m_value);
       }
       return *this;
    }
    Name::~Name() {
       if (sdds_debug) clog << "Des: " << *this << endl;
       delete[] m_value;
    }
    std::ostream& Name::display(std::ostream& ostr) const {
       return ostr << m_value;
    }
    std::istream& Name::read(std::istream& istr) {
       delete[] m_value;
       m_value = ut.getDynCstr(istr);
       return istr;
    }
    std::ostream& operator<<(std::ostream& ostr, const Name& N) {
       return N.display(ostr);
    }
    std::istream& operator>>(std::istream& istr, Name& N) {
       return N.read(istr);
    }
}
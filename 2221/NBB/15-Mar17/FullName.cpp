#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "Utils.h"
#include "FullName.h"
namespace sdds {



    Name FullName::first() const {
       return Name::value();
    }

    Name FullName::last() const {
       return m_lastname;
    }

    FullName::FullName(const char* first, const char* last):Name(first) {
       if (last) {
          m_lastname = ut.alcpy(last);
       }
       else {
          m_lastname = ut.alcpy("");
       }
    }

    //FullName::FullName(const FullName& fn) :Name(fn) {
    //   m_lastname = ut.alcpy(fn.m_lastname);
    //}
    // 
    // can only be done if the Base class has a default constructor
    FullName::FullName(const FullName& fn) {
       operator=(fn);
    }

    FullName& FullName::operator=(const FullName& fn) {
       if (this != &fn) {
          Name::operator=(fn);
          delete[] m_lastname;
          m_lastname = ut.alcpy(fn.m_lastname);
       }
       return *this;
    }

    FullName::~FullName() {
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
       std::cout << "First: ";
       Name::read(istr);
       std::cout << "Last: ";
       delete[] m_lastname;
       m_lastname = ut.getDynCstr(istr);
       return istr;
    }

}
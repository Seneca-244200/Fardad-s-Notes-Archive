#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "Name.h"
using namespace std;
namespace sict {
  Name::Name() {
    m_first = m_last = nullptr; // safe empty state
  }
  Name::Name(const char fn[], const char ln[]) {
    int len = strlen(fn);
    m_first = new char[len + 1];
    strcpy(m_first, fn);
    len = strlen(ln);
    m_last = new char[len + 1];
    strcpy(m_last, ln);
  }
  void Name::copy(const Name& cp) {
    delete[] m_first;
    delete[] m_last;
    m_first = new char[strlen(cp.m_first) + 1];
    m_last = new char[strlen(cp.m_last) + 1];
    strcpy(m_first, cp.m_first);
    strcpy(m_last, cp.m_last);
  } 
  Name::Name(const Name& cp) {
    m_first = new char[strlen(cp.m_first) + 1];
    m_last = new char[strlen(cp.m_last) + 1];
    strcpy(m_first, cp.m_first);
    strcpy(m_last, cp.m_last);
  }
  void Name::operator=(const Name& cp) {
    delete[] m_first;
    delete[] m_last;
    m_first = new char[strlen(cp.m_first) + 1];
    m_last = new char[strlen(cp.m_last) + 1];
    strcpy(m_first, cp.m_first);
    strcpy(m_last, cp.m_last);
  }
  Name::~Name() {
    delete[] m_first;
    delete[] m_last;
  }
  // rookie way
  void Name::display() {
    if (m_first != nullptr) {  // if not empty print
      cout << m_first << " " << m_last;
    }
  }

  // good way
  ostream& Name::display(ostream& ostr) {
    if (m_first != nullptr) {  // if not empty print
      ostr << m_first << " " << m_last;
    }
    return ostr;
  }

}
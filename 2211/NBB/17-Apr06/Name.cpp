#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "Name.h"
using namespace std;
namespace sdds {
   Name::Name(const char* value) {
      if (value) {
         m_value = new char[strlen(value) + 1];
         strcpy(m_value, value);
      }
      else {
         m_value = new char[1];
         m_value[0] = '\0';
      }
   }
   Name::Name(const Name& N) {
      //m_value = nullptr;  we don't need this since m_value is initialized to nullptr in class definition
      operator=(N); 
      //*this = N;
   }
   Name& Name::operator=(const Name& N) {
      if (this != &N) {
         delete[] m_value;
         m_value = new char[strlen(N.m_value) + 1];
         strcpy(m_value, N.m_value);
      }
      return *this;
   }
   Name::~Name() {
      delete[] m_value;
   }
   ostream& Name::display(ostream& ostr) const {
      ostr << m_value; // no need of null, because the safe empty state creates an empty string that is printable
      return ostr;
   }
   ostream& operator<<(ostream& ostr, const Name& N) {
      return  N.display(ostr);
   }
}

#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "Name.h"
using namespace std;
Name::Name(const char* value) {
   if (value) {
      m_value = new char[strlen(value) + 1];
      strcpy(m_value, value);
   }
   else {
      m_value = new char[1];
      m_value[0] = '\0';
      //*m_value = '\0';
   }
}
Name::Name(const Name& N) {
   //m_value = nullptr; // no need since it is initialized in the def
   operator=(N);
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
void Name::display(ostream& ostr)const {
   ostr << m_value;
}
ostream& operator<<(ostream& ostr, const Name& N) {
   N.display(ostr);
   return ostr;
}
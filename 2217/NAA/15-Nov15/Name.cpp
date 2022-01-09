#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "Utils.h"
#include "Name.h"
using namespace std;
namespace sdds {
   Name::Name(const char* value) {
      if (value) {
         Utils::alloCopy(m_value, value);
         //m_value = new char[strlen(value) + 1];
         //strcpy(m_value, value);
      }
      else {
         Utils::alloCopy(m_value, "");
         //m_value = new char[1];
         //m_value = 0; // '\0';
      }
   }
   Name::Name(const Name& N) {
      //  m_value = nullptr; no need since it is 
      // initialized to null already in class definition
      operator=(N);
   }
   Name& Name::operator=(const Name& N) {
      if (this != &N) {
         Utils::alloCopy(m_value, N.m_value);
         //delete[] m_value;// when called in contructor: no effect since m_value is null
         //m_value = new char[strlen(N.m_value) + 1];
         //strcpy(m_value, N.m_value);
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
}
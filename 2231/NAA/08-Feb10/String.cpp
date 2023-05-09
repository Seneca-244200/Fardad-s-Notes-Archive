#include <iostream>
#include "String.h"
#include "Utils.h"
using namespace std;
namespace sdds {
   String::String(const char* cstr) {
      if (cstr) {
         m_length = U.strlen(cstr);
         m_data = new char[m_length + 1];
         U.strcpy(m_data, cstr);
      }
   }
   String::~String() {
      delete[] m_data;
   }
   String::operator bool()const {
      return m_data != nullptr;
   }
   size_t String::length() const{
      return m_length;
   }
   String& String::operator+=(const String& R){
      if (R) {
         char* temp = new char[length() + R.length() + 1];
         if (*this) {
            U.strcpy(temp, this->m_data);
         }
         else {
            temp[0] = 0;
         }
         U.strcat(temp, R.m_data);
         m_length += R.length();
         delete[] this->m_data;
         this->m_data = temp;
      }
      return *this;
   }
   ostream& String::display(ostream& ostr)const {
      if (*this) {
         ostr << m_data;
      }
      return ostr;
   }
   ostream& operator<<(ostream& ostr, const String& S) {
      return S.display(ostr);
   }
}
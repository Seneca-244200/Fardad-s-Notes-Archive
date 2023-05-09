#include <iostream>
#include "String.h"
#include "Utils.h"
using namespace std;
namespace sdds {
   bool String::isEmpty() const{
      return m_data == nullptr;
   }
   String::String(const char* cstr) {
      if (cstr) {
         m_length = U.strlen(cstr);
         m_data = new char[m_length + 1];
         U.strcpy(m_data, cstr);
      }
   }
   ostream& String::display(ostream& ostr)const {
      if (!isEmpty()) {
         ostr << m_data;
      }
      return ostr;
   }
   size_t String::length()const {
      return m_length;
   }
   String& String::operator+=(const String& S){
      char* temp = new char[m_length + S.length() + 1];
      temp[0] = 0; // empty string;
      if (*this) {
         U.strcpy(temp, m_data);
      }
      if (S) {
         U.strcat(temp, S);
      }
      m_length += S.length();
      delete[] m_data;
      m_data = temp;
      return *this;
   }
   String::~String(){
      delete[] m_data;

   }

   String::operator const char* ()const {
      return m_data;
   }
   String::operator bool() const {
      return !isEmpty();
   }
   std::ostream& operator<<(std::ostream& ostr, const String& Ro){
      return Ro.display(ostr);
   }
}
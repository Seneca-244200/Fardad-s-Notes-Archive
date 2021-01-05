#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#include "String.h"
namespace sdds {
   void String::init() {
      m_data = nullptr;
   }
   String& String::set(const char* Cstr) {
      delete[] m_data;
      m_data = new char[strlen(Cstr) + 1];
      strcpy(m_data, Cstr);
      return *this;
   }
   String& String::operator+=(const char* Cstr) {
      char* temp;
      if (m_data != nullptr) {
         temp = new char[strlen(m_data) + strlen(Cstr) + 1];
         strcpy(temp, m_data);
         strcat(temp, Cstr);
         delete[] m_data;
      }
      else {
         temp = new char[strlen(Cstr) + 1];
         strcpy(temp, Cstr);
      }
      m_data = temp;
      return *this;
   }
   String& String::operator+=(const String& S) {
      if (S.m_data != nullptr) {
         operator+=(S.m_data);
      }
      return *this;
   }
   ostream& String::display(ostream& ostr)const {
      if (m_data != nullptr) {
         ostr << m_data;
      }
      return ostr;
   }
   std::istream& String::read(std::istream& istr) {
      char temp[2048];
      istr.get(temp, 2048);
      istr.ignore(5000, '\n');
      set(temp);
      return istr;
   }
   void String::deallocate() {
      delete[] m_data;
   }

   String::String() {
      init();
   }

   String::String(const char* Cstr) {
      init();
      set(Cstr);
   }

   String::~String() {
      deallocate();
   }





   std::ostream& operator<<(std::ostream& ostr, const String& str) {
      return str.display(ostr);
   }

   std::istream& operator>>(std::istream& istr, String& S) {
      return S.read(istr);
   }

}
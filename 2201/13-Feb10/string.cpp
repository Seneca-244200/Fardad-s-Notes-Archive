#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "string.h"
using namespace std;
namespace sdds {
   String::String() {
      setEmpty();
   }
   void String::setEmpty() {
      m_data = nullptr;
      m_size = 0;
   }
   String::String(const char* str) {
      setEmpty();
      if (str) { // if(str != nullptr) {
         set(str);
      }
   }
   String::String(const String& S) {
      setEmpty();
      if (S.m_data) {
         set(S.m_data);
      }
   }
   // we also need this for line 13 in prg.cpp (C = B ...)
// otherwise we will have shared memeory between two objects
// which will cause a crash when they are destructed (same memory location
// will get deleted twice)
   String& String::operator=(const String& S) {
      set(S.m_data);
      return *this;
   }

   void String::set(const char* data) {
      freeMemory();
      m_size = strlen(data);
      m_data = new char[m_size + 1];
      strcpy(m_data, data);
   }
   String::~String() {
      freeMemory();
   }
   int String::size()const {
      return m_size;
   }
   bool String::isEmpty()const {
      return m_data == nullptr || m_size == 0;
   }
   bool String::operator>(const String& S)const {
      bool res = false;
      if (!isEmpty() && !S.isEmpty()) {
         res = strcmp(m_data, S.m_data) > 0;
      }
      return res;
   }

   String& String::operator+=(const String& Ro) {
      char* temp = new char[m_size + Ro.m_size + 1];
      strcpy(temp, m_data);
      strcat(temp, Ro.m_data);
      delete[] m_data;
      m_data = temp;
      m_size += Ro.m_size;
      return *this;
   }
   String& String::operator=(const char* m_data) {
      set(m_data);
      return *this;
   }

   std::ostream& String::print(std::ostream& ostr)const {
      if (m_data) ostr << m_data;
      return ostr;
   }
   std::istream& String::read(std::istream& istr) {
      char temp[2048];
      istr.getline(temp, 2048, '\n');
      if (istr.fail()) {
         istr.clear();
         istr.ignore(10000, '\n');
      }
      set(temp);
      return istr;
   }
   void String::freeMemory() {
      delete[] m_data;
      setEmpty();
   }
   String concat(const String& S1, const String& S2) {
      String ret = S1;
      ret += S2;
      return ret;
   }
   ostream& operator<<(std::ostream& os, const String& RO) {
      return RO.print(os);
   }
   std::istream& operator>>(std::istream& istr, String& RO) {
      return RO.read(istr);
   }
}
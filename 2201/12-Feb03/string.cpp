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
      if (str) {
         set(str);
      }
   }
   String::String(const String& S) {
      setEmpty();
      if (S.m_data) {
         set(S.m_data);
      }
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
   // we also need this for line 13 in prg.cpp (C = B ...)
   // otherwise we will have shared memeory between two objects
   // which will cause a crash when they are destructed (same memory location
   // will get deleted twice)
   String& String::operator=(const String& S) {
      set(S.m_data);
      return *this;
   }


   void String::print()const {
      //if (m_data != nullptr) cout << m_data;
      if (m_data) cout << m_data;
   }

   void String::freeMemory() {
      delete[] m_data;
      m_data = nullptr;
      m_size = 0;
   }
   String concat(const String& S1, const String& S2) {
      String ret = S1;
      ret += S2;
      return ret;
   }
   void addTo(String& des, const String& src) {
      char* temp = new char[des.m_size + src.m_size + 1];
      strcpy(temp, src.m_data);
      strcat(temp, src.m_data);
      delete[] des.m_data;
      des.m_data = temp;
      des.m_size += src.m_size;
   }
   ostream& operator<<(std::ostream& os, const String& S) {
      S.print();
      return os;
   }
}
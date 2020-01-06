#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "String.h"
using namespace std;
namespace sdds {
   String::String() {
      AllocateAndCopy("");
   }
   String::String(const char* str) {
      AllocateAndCopy(str);
   }   
   String::String(const String& S) {
      AllocateAndCopy(S.cString());
   }
   void String::AllocateAndCopy(const char* str) {
      m_size = strlen(str);
      m_data = new char[m_size + 1];
      strcpy(m_data, str);
   }
   String& String::set(const char* str) {
      delete[] m_data;
      AllocateAndCopy(str);
      return *this;
   }
   String& String::concat(const char* cString) {
      // to be implemeted
      return *this;
   }
   String& String::concat(const String& S) {
      return concat(S.cString());
   }
   ostream& String::display()const {
      if (m_data != nullptr) {
         cout << m_data;
      }
      return cout;
   }
   const char* String::cString()const {
      return m_data;
   }
   int String::size()const {
      return m_size;
   }
   String::~String() {
      delete[] m_data;
   }

}
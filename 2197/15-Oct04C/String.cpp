#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "String.h"
using namespace std;
namespace sdds {
   String::String() {
      allocateAndCopy("");
   }
   String::String(const char* str) {
      allocateAndCopy(str);
   }
   String::String(const String& S) {
  //    allocateAndCopy(S.cString());
      allocateAndCopy(S.m_data);
   }
   String& String::operator=(const char* str) {
      delete[] m_data;
      allocateAndCopy(str);
      return *this;
   }
   String& String::concat(const char* cString) {
      char* temp = new char[strlen(cString) + m_length + 1];
      strcpy(temp, m_data);
      strcat(temp, cString);
      delete[] m_data;
      m_length += strlen(cString);
      m_data = temp;
      return *this;
   }
   String& String::operator+=(const char* cString) {
      return concat(cString);
   }
   String& String::operator+=(const String& S) {
      return concat(S.cString());
   }
   String& String::concat(const String& S) {
      return concat(S.cString());
   }
   void String::allocateAndCopy(const char* str) {
      m_length = strlen(str);
      m_data = new char[m_length + 1];
      strcpy(m_data, str);
   }
   int String::length()const {
      return m_length;
   }
   const char* String::cString()const {
      return m_data;
   }
   ostream& String::display()const {
      if (m_data != nullptr) {
         cout << m_data;
      }
      else {// will never happen unless pigs fly
         cout << "Fatal error #1, contact the programmer!";
      }
      return cout;
   }
   String::~String() {
      delete[] m_data;
      //m_data = nullptr; no need in destructor
   }
}
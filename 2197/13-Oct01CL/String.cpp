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
      allocateAndCopy(S.m_data);
   }
   String& String::set(const char* str) {
      delete[] m_data;
      allocateAndCopy(str);
      return *this;
   }
   void String::allocateAndCopy(const char* str) {
      m_size = strlen(str);
      m_data = new char[m_size + 1];
      strcpy(m_data, str);
   }
   String::~String() {
      delete[] m_data;
   }

   ostream& String::display()const {
      if (m_data != nullptr) {
         cout << m_data;
      }
      else {
         cout << "Error# 1: Fatal error, null pointer in data!";
      }
      return cout;
   }
}
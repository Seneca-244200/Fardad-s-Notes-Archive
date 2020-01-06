#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "String.h"
using namespace std;
namespace sdds {
   String::String() {
      //m_length = 0;
      //m_data = new char[1];
      //m_data[0] = 0;
      allocateAndCopy("");
   }
   String::String(const char* str):m_max_read_length(1024){
      allocateAndCopy(str);
   }
   String::String(const String& S) : m_max_read_length(1024) {
  //    allocateAndCopy(S.cString());
      allocateAndCopy(S.m_data);
   }
   String& String::operator=(const char* str) {
      delete[] m_data;
      allocateAndCopy(str);
      return *this;
   }
   String& String::operator=(const String& S) {
      return operator=(S.m_data);
      //return *this = S.m_data;
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
   ostream& String::display(ostream& os)const {
      if (m_data != nullptr) {
         os << m_data;
      }
      else {// will never happen unless pigs fly
         os << "Fatal error #1, contact the programmer!";
      }
      return os;
   }
   std::istream& String::read(std::istream& is) {
      char* str = new char[m_max_read_length+1];
      is.getline(str, m_max_read_length, '\n');
      if (!is.fail()) {
         operator=(str);
      }
      delete[] str;
      return is;
   }
   int String::max_cin_length()const {
      return m_max_read_length;
   }
   void String::max_cin_length(int value) {
      m_max_read_length = value;
   }

   String::~String() {
      delete[] m_data;
      //m_data = nullptr; no need in destructor
   }
   std::ostream& operator<<(std::ostream& os,
      const String& RightOper) {
      return RightOper.display(os);
   }
   std::istream& operator>>(std::istream& is,
      String& RightOper) {
      return RightOper.read(is);
   }
}
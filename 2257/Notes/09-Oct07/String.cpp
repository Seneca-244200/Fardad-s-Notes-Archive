#include <iostream>
#include "cstr.h"
#include "String.h"
using namespace std;
namespace seneca {
   String::String() {
      m_data[0] = 0;
   }
   String::String(const char* data) {
      if (data && data[0]) {
         strcpy(m_data, data);
      }
      else {
         m_data[0] = 0;
      }
   }

   String String::operator+(const String& righOperand) const {
      String res;
      res = *this;
      res += righOperand;
      return res;
   }

   String& String::operator++() {
      String space = " ";
      space += *this;
      *this = space;
      return *this;
   }
   


   String& String::add(const char* cstr) {
      strcat(m_data, cstr);
      return *this;
   }
   String& String::add(const String& S) {
      add(S.m_data);
      return *this;
   }   
   String& String::operator+=(const char* cstr) {
      strcat(m_data, cstr);
      return *this;
   }
   String& String::operator+=(const String& S) {
      add(S.m_data);
      return *this;
   }
   ostream& String::display(ostream& ostr)const {
      ostr << m_data;
      return ostr;
   }
   std::istream& String::read(std::istream& istr) {
      istr.getline(m_data, 4096);
      return istr;
   }
}
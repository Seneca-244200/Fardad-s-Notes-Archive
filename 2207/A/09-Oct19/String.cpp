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
   ostream& String::display(ostream& ostr)const {
      if (m_data != nullptr) {
         ostr << m_data;
      }
      return ostr;
   }
   std::istream& String::read(std::istream& cinRef) {
      char cStr[2048];
      cinRef.get(cStr, 2048);
      cinRef.ignore(5000, '\n');
      set(cStr);
      return cinRef;
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


   std::ostream& operator<<(ostream& ostr, const String& RO) {
      return RO.display(ostr);
   }

   std::istream& operator>>(std::istream& istr, String& RO) {
      return RO.read(istr);
   }

}
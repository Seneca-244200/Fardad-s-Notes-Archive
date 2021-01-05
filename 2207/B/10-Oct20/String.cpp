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
   ostream& String::display(ostream& ostr)const {// will not change the owne (ie. the String object)
      if (m_data != nullptr) {
         ostr << m_data;
      }
      return ostr;
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





   std::ostream& operator<<(std::ostream& coutRef, const String& rightOper) {
      rightOper.display(coutRef);
      return coutRef;
   }


}
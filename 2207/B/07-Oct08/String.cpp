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
   ostream& String::display()const {// will not change the owne (ie. the String object)
      if (m_data != nullptr) {
         cout << m_data;
      }
      return cout;
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





}
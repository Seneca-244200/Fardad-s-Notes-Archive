#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#include "String.h"
namespace sdds {
   void String::init() {
      m_data = nullptr;
   }
   String::String() {
      init();
   }
   String::String(const char* value) {
      init();
      set(value);
   }
   void String::set(const char* Cstr) {
      deallocate();
      m_data = new char[strlen(Cstr) + 1];
      strcpy(m_data, Cstr);
   }
   ostream& String::display()const {
      if (m_data != nullptr) {
         cout << m_data;
      }
      return cout;
   }
   String::~String() {
      deallocate();
   }
   void String::deallocate() {
  /*    if(m_data)
      cout << "Killig string with " << m_data << endl;*/
      delete[] m_data;
   }
   // ostream -> cout is an ostream
   // istream -> cin is an istream
}

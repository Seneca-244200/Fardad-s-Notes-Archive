#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#include "String.h"
namespace sdds {
   const bool s_debug = true;
   void String::init() {
      m_data = nullptr;
   }

   String& String::set(const char* Cstr) {
      delete[] m_data;
      m_data = new char[(strlen(Cstr) + 1)];
      strcpy(m_data, Cstr);
      return *this;
   }

   String::String(const String& S) {
      if (s_debug) cout << "Copying " << S << endl;
      init();
      // *this = S;
      operator=(S);
   }

   String& String::operator=(const String& S) {
      if (s_debug) cout << *this << " is assigned to " << S << endl;
      if (S.m_data != nullptr) {
         set(S.m_data);
      }
      else {
         deallocate();
      }
      return *this;
   }
   String& String::operator=(const char* Cstr) {
      if (s_debug) cout << *this << " is assigned to " << Cstr << endl;
      if (Cstr != nullptr) {
         set(Cstr);
      }
      else {
         deallocate();
      }
      return *this;
   }
   ostream& String::display(ostream& ostr)const {
      if (m_data != nullptr) {
         ostr << m_data;
      }
      return ostr;
   }
   std::istream& String::read(std::istream& istr) {
      char temp[2048];
      istr.get(temp, 2048);
      istr.ignore(5000, '\n');
      set(temp);
      return istr;
   }
   void String::deallocate() {
      delete[] m_data;
      m_data = nullptr;
   }
   String::String() {
      init();
      if (s_debug) cout << "Defaulting String" << endl;
   }

   String::String(const char* Cstr) {
      init();
      set(Cstr);
      if (s_debug) cout << "Created " << *this << " out of " << Cstr << endl;
   }

   String::~String() {
      if (s_debug) cout << *this << " is going out of scope (dying)" << endl;
      deallocate();
   }



   std::ostream& operator<<(std::ostream& ostr, const String& str) {
      return str.display(ostr);
   }

   std::istream& operator>>(std::istream& istr, String& S) {
      return S.read(istr);
   }

}
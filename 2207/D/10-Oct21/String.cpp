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
      if (Cstr != nullptr) {
         delete[] m_data;
         m_data = new char[(strlen(Cstr) + 1)];
         strcpy(m_data, Cstr);
      }
      return *this;
   }
   // copy constructor
   String::String(const String& S) {
      init();
      operator=(S);
      /*
      *this = S;
      */
      if (s_debug) cout << "Copied" << S << endl;
   }
   // copy assignment
   String& String::operator=(const String& S) {
      if (s_debug) cout << "Copy assigned: " << *this <<" to " <<  S << endl;
      return set(S.m_data);
   }
   String& String::operator=(const char* Cstr) {
      if (s_debug) {
         if (Cstr)
            cout << "assigned to " << *this << " to " << Cstr << endl;
         else
            cout << "assigned " << *this << " to null" << endl;
      }
      return set(Cstr);
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
   }
   void String::resize(int newsize) {  // only to grow, if shorten, it will fail
      char* temp = new char[newsize];
      int i;
      if (m_data != nullptr) strcpy(temp, m_data);
      delete[] m_data;
      m_data = temp;
   }

   String::String() {
      if (s_debug) cout << "Default creating a String!" << endl;
      init();
   }

   String::String(const char* Cstr) {
      if (s_debug) {
         if (Cstr) cout << "Create a string out of " << Cstr << endl;
         else cout << "Createing a String out of null!!!!" << endl;
      }
      init();
      set(Cstr);
   }

   String::~String() {
      if (s_debug) {
         if (m_data) cout << "removing " << *this << " from memory" << endl;
         else cout << "removed empty string" << endl;
      }
      deallocate();
   }
   std::ostream& operator<<(std::ostream& ostr, const String& str) {
      return str.display(ostr);
   }

   std::istream& operator>>(std::istream& istr, String& S) {
      return S.read(istr);
   }

}
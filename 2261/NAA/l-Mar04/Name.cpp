#include <iostream>  
#include "cstr.h"
#include "Name.h"
namespace seneca {
   Name::operator bool()const {
      return m_first && m_last;
   }
   void Name::copy(const char* first, const char* last) {
      if (first && last) {
         m_first = new char[strlen(first) + 1];
         m_last = new char[strlen(last) + 1];
         strcpy(m_first, first);
         strcpy(m_last, last);
      }
   }
   void Name::deallocate() {
      delete[] m_first;
      delete[] m_last;
      m_last = m_first = nullptr;
   }
   // Name::Name() {} no need because I have = default in header
   Name::Name(const char* first, const char* last) {
      copy(first, last);
   }
   Name::Name(const Name& other) {
      copy(other.m_first, other.m_last);
   }
   Name& Name::operator=(const Name& other) {
      if (this != &other) { // self assgiment protection
         deallocate();      // currect data deletion
         copy(other.m_first, other.m_first); // copy
      }
      return *this; // cascading support if needed
   }
   Name::~Name() {
      deallocate();
   }
   std::ostream& Name::display(std::ostream& os) const {
      if(*this)
         os << m_first << " " << m_last;
      return os;
   }
   std::istream& Name::read(std::istream& is) {
      char buffer[512]{};
      deallocate();
      is >> buffer;
      if (is) {
         m_first = new char[strlen(buffer) + 1];
         strcpy(m_first, buffer);
      }
      if (is) {
         is >> buffer;
         m_last = new char[strlen(buffer) + 1];
         strcpy(m_last , buffer);
      }
      if(!is) {
         deallocate();
      }
      is.ignore(10000, '\n');
      return is;
   }
   std::ostream& operator<<(std::ostream& os, const Name& N) {
      return N.display(os);
   }

   std::istream& operator>>(std::istream& is, Name& N) {
      return N.read(is);
   }

}
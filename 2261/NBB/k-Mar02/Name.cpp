#include <iostream>  
#include "cstr.h"
#include "Name.h"
namespace seneca {
   Name::operator bool()const {
      return m_first && m_last;
   }
   void Name::copy(const Name& other) {
      if (other) {
         m_first = new char[strlen(other.m_first) + 1];
         strcpy(m_first, other.m_first);
         m_last = new char[strlen(other.m_last) + 1];
         strcpy(m_last, other.m_last);
      }
   }
   void Name::free() {
      delete[] m_first;
      delete[] m_last;
      m_first = m_last = nullptr;
   }
   Name::Name(const Name& other) {
      copy(other);
   }
   Name& Name::operator=(const Name& other) {
      if (this != &other) {
         free();
         copy(other);
      }
      return *this;
   }
   Name::Name(const char* first, const char* last) {
      if (first && last) {
         m_first = new char[strlen(first) + 1];
         m_last = new char[strlen(last)+ 1];
         strcpy(m_first, first);
         strcpy(m_last, last);
      }
   }
   Name::~Name() {
      free();
   }
   std::ostream& Name::display(std::ostream& os) const {
      if(*this)
         os << m_first << " " << m_last;
      return os;
   }
   std::istream& Name::read(std::istream& is) {
      free();
      char buffer[512]{};
      is >> buffer;
      if (is) {
         m_first = new char[strlen(buffer) + 1];
         strcpy(m_first, buffer);
         is >> buffer;
      }
      if (is) {
         m_last = new char[strlen(buffer) + 1];
         strcpy(m_last, buffer);
      }
      else {
         free();
      }
      return is;
   }
   std::ostream& operator<<(std::ostream& os, const Name& N) {
      return N.display(os);
   }
   std::istream& operator>>(std::istream& is, Name& N) {
      return N.read(is);
   }
}
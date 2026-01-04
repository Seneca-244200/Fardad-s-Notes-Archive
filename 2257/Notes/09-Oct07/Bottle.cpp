#include <iostream>
#include "Bottle.h"
#include "cstr.h"
using namespace std;
namespace seneca {
   Bottle::Bottle(const char* content, unsigned int capacity ) {
      if(content && content[0])
         strcpy(m_content, content, 80);
      else
         strcpy(m_content, "No Name", 80);
      m_capacity = capacity;
      m_curAmount = 0;
   }

   Bottle& Bottle::operator+=(unsigned int amount) {
      m_curAmount += amount;
      if (m_curAmount > m_capacity) {
         m_curAmount = m_capacity;
         m_overflow = true;
      }
      return *this;
   }
   Bottle& Bottle::operator=(unsigned int amount) {
      m_curAmount = amount;
      if (m_curAmount > m_capacity) {
         m_curAmount = m_capacity;
         m_overflow = true;
      }
      return *this;
   }
   Bottle& Bottle::operator=(const Bottle& other) {
      //return *this = other.m_curAmount;
      return operator=(other.m_curAmount);
   }
    Bottle Bottle::operator+(const Bottle& other)const {
      Bottle S("S", this->m_capacity +other.m_capacity);
      return S = this->m_curAmount + other.m_curAmount;
   }
   Bottle& Bottle::operator++() {
      return operator+=(1);
   }
   Bottle Bottle::operator++(int) {
      Bottle old = *this; // faking post increment
      operator+=(1);
      return old;
   }
   Bottle::operator int() const {
      return int(m_curAmount);
   }
   Bottle& Bottle::clear() {
      m_overflow = false;

   }
   // planning for a detectable safe empty state
   Bottle::operator bool() const {
      return !m_overflow;
   }
   unsigned int Bottle::operator[](size_t index) const {
      unsigned int val = -1;
      if (index == 0) 
         val = m_capacity;
      else if (index == 1) 
         val = m_curAmount;
      return val;
   }
   // bad implementation, needs friendship
   //int& operator+=(int& left, const Bottle& right) {
   //   left += right.m_curAmount;
   //   return left;
   //}
   int& operator+=(int& left, const Bottle& right) {
      left += int(right);
      return left;
   }
   std::ostream& Bottle::display(std::ostream& ostr)const {
       ostr << m_content << " Bottle("
         << m_curAmount << "/"
         << m_capacity << ")";
   }

   ostream& operator<<(ostream& left, const Bottle& right) {
      if (!right)
         left << "Spilled ";
      return right.display(left);
   }
}

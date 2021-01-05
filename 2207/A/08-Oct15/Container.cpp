#include <iostream>
#include "Container.h"
using namespace std;
namespace sdds {
   void Container::correctContentValue() {
      if (m_content > m_capacity) m_content = m_capacity;
      if (m_content < 0) m_content = 0;
   }
   Container::Container(int capacity , int content ) {
      m_capacity = capacity;
      m_content = content;
   }
   ostream& Container::display()const {
      return cout << m_content << "cc/" << m_capacity;
   }
   Container&  Container::operator+=(int value) { // can never have more than one argument
             // and that arg is the right right operand
      if (value > 0) {
         m_content += value;
         correctContentValue();
      }
      return *this;
   }
   Container& Container::operator+=(Container& RO) {
      int avSpc = m_capacity - m_content;
      if (avSpc > RO.m_content) {
         m_content += RO.m_content;
         RO.m_content = 0;
      }
      else {
         RO.m_content -= avSpc;
         m_content += avSpc;
      }
      return *this;
   }
   Container& Container::operator=(const Container& RO) {
      m_content = RO.m_content;
      // correct possilbe overflow
      correctContentValue();
      return *this;
   }

   bool Container::operator!() const {
      return m_content == 0;
   }

   Container& Container::operator++() {
      m_content++;
      correctContentValue();
      return *this;
   }
   Container& Container::operator--() {
      m_content--;
      correctContentValue();
      return *this;
   }
   Container& Container::operator++(int) {
      m_content++;
      correctContentValue();
      return *this;
   }
   // simulated the sequence of postfix -- in integer operator
   Container Container::operator--(int) {
      Container oldCont = *this;
      m_content--;
      correctContentValue();
      return oldCont;
   }

   /*no return type*/Container::operator int() const {
      return m_content;
   }
   Container::operator bool()const {
      return m_content != 0;
   }


}
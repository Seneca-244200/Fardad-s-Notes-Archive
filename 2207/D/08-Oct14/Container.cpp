#include <iostream>
#include "Container.h"
using namespace std;
namespace sdds {
   Container::Container(int capacity , int content ) {
      m_capacity = capacity;
      m_content = content;
   }
   ostream& Container::display()const {
      return cout << m_content << "/" << m_capacity;
   }
   void Container::correctContent() {
      if (m_content > m_capacity) m_content = m_capacity;
      if (m_content < 0) m_content = 0;
   }
   Container& Container::operator+=(int value) {
      m_content += value;
      correctContent();
      return *this;
   }
   Container& Container::operator=(const Container& RightOperand) {
      m_content = RightOperand.m_content;
      correctContent();
      return *this;
   }
   Container Container::operator+(const Container& RO)const {
      Container sum(m_capacity + RO.m_capacity
                    ,m_content + RO.m_content );
      return sum;
   }
   Container& Container::operator~() {
      m_content = 0;
      return *this;
   }
   Container& Container::operator--() {
      m_content--;
      correctContent();
      return *this;
   }
   Container& Container::operator++() {
      m_content++;
      correctContent();
      return *this;
   }
// this DOES simulate the postfix ++ 
// as integers in C
   Container Container::operator++(int) {
      Container old = *this;
      m_content++;
      correctContent();
      return old;
   }
   // this does not simulate the postfix -- 
   // as integers in C
   Container& Container::operator--(int) {
      m_content--;
      correctContent();
      return *this;
   }
   Container::operator int()const {
      return m_content;
   }
   Container::operator bool()const {
      return m_content != 0;
   }
   bool Container::operator!()const {
      return m_content == 0;
   }
}
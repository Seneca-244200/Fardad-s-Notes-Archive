#include <iostream>
#include "Container.h"
using namespace std;

ostream& Container::display(ostream& os)const {
   return os << m_content << "cc/" << m_capacity;
}

Container& Container::addTo(int value) {
   m_content += value;
   return *this;
}

Container& Container::operator+=(int rightOper) {
   m_content += rightOper;
   return *this;
}
int Container::getContent() const {
   return m_content;
}
Container::operator int() const {
   return m_content;
}



Container::operator double() const {
   return m_content / (double)m_capacity;
}

Container::Container(int capacity, int content) {
   m_capacity = capacity;
   m_content = content;
}


int operator+=(int& leftOper, const Container& rightOper) {
//   return leftOper += rightOper.getContent();
   return leftOper += (int)rightOper;
}
// member one (good)
Container Container::operator+(const Container& rightOper) const {
   //Container Sum(this->m_capacity + rightOper.m_capacity, this->m_content + rightOper.m_content);
   //return Sum;
   return Container(this->m_capacity + rightOper.m_capacity, this->m_content + rightOper.m_content);
}
bool Container::operator!() const {
   return m_content == 0;
}
Container& Container::operator++() {
   if (m_content < m_capacity) {
      m_content++;
   }
   return* this;
}
Container Container::operator++(int) {
   Container keepOld = *this;
   if (m_content < m_capacity) {
      m_content++;
   }
   return keepOld;
}
// non-member friend helper function  (nuts)
Container operator-(const Container& left, const Container& right) {
   return Container(left.m_capacity, ((int)left < (int)right? 0 : (int)left - (int)right) );
}

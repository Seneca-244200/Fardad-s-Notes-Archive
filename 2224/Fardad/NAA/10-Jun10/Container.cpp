#include <iostream>
#include "Container.h"
using namespace std;
namespace sdds {
   bool Container::isValid()const{
      return m_capacity > 0;
   }
   bool Container::operator!()const {
      return !isValid();
   }
   Container::Container(int cap, int vol){
      if (vol >= 0 && cap > 0 && vol <= cap) {
         m_volume = vol;
         m_capacity = cap;
      }
      else {
         m_capacity = -1;
      }
   }

   Container& Container::clear(){
      m_capacity = 250;
      m_volume = 0;
      return *this;
   }

   Container& Container::operator=(int vol){
      if (isValid()) {
         if (vol >= 0) {
            m_volume = vol;
            if (m_capacity < m_volume) {
               m_volume = m_capacity;
            }
         }
         else {
            m_capacity = -1;
         }
      }
      return *this;
   }

   Container& Container::operator~() {
      return clear();
   }

   Container& Container::operator+=(int vol){
      operator=(m_volume + vol);
      //*this = m_volume + vol;
      return *this;
   }
 /*  Container& Container::operator=(Container& right) {
      if(isValid() && right.isValid()) {
         operator= (right.volume());
         right = 0;
      }
      return *this;
   }*/
 /*  Container& Container::operator=(Container right) {
      if(isValid() && right.isValid()) {
         operator= (right.volume());
      }
      return *this;
   }*/
   Container& Container::operator++() {
      return *this = (volume() + 1);
   }
   Container Container::operator++(int) {
      Container ret = *this;
      *this = (volume() + 1);
      return ret;
   }
   Container& operator--(Container& operand) {
      return operand = (operand.volume() - 1);
   }
   Container operator--(Container& operand, int) {
      Container ret = operand;
      --operand;
      return ret;
   }
   Container& Container::operator+=(Container& C){
      if (C.isValid()) {
         if (m_capacity - m_volume >= C.volume()) {
            operator+=(C.volume());
            C.operator=(0);
         }
         else { // has left over
            C.operator=(C.volume() - (m_capacity - m_volume));
            m_volume = m_capacity;
         }
      }
      return *this;
   }

   int Container::volume() const{
      return m_volume;
   }

   int Container::capacity() const{
      return m_capacity;
   }

   std::ostream& Container::display(std::ostream& ostr) const{
      if (isValid()) {
         ostr << "CN:[";
         ostr.width(8);
         ostr.setf(ios::right);
         ostr << m_volume;
         ostr << "]/[";
         ostr.width(8);
         ostr << m_capacity;
         ostr << "]";
      }
      else {
         ostr << "Bad Container!";
      }
      return ostr;
   }

   std::istream& Container::read(std::istream& istr) {
      int vol, cap;
      istr >> vol;
      istr.ignore();
      istr >> cap;
      if(istr) {
         m_capacity = cap;
         operator=(vol);
      }
      else {
         m_capacity = -1;
      }
      return istr;
   }

   Container Container::operator+(Container& right) {
      Container res(capacity() + right.capacity(),
                    volume() + right.volume());
      operator=(0);
      right.operator=(0);
      return res;
   }

  

   //Container operator+(Container& left, Container& right)
   //{
   //   Container res(left.capacity()+right.capacity(), 
   //                left.volume() + right.volume());
   //   left.operator=(0);
   //   right.operator=(0);
   //   return res;
   //}

   std::ostream& operator<<(std::ostream& left, const Container& right){
      return right.display(left);
   }

   std::istream& operator>>(std::istream& left, Container& right){
      return right.read(left);
   }


}
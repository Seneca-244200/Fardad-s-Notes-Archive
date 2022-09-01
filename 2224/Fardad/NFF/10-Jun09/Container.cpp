#include <iostream>
#include "Container.h"
using namespace std;
namespace sdds {
   bool Container::validVals(int cap, int vol){
      return (vol >= 0 && cap > 0 && cap > vol);
   }
   Container::Container(int cap, int vol) {
      if (validVals(cap, vol)) {
         m_volume = vol;
         m_capcity = cap;
      }
      else {
         m_capcity = -1;
      }
   }
   Container& Container::operator=(int vol){
      if (vol >= 0) {
         m_volume = vol;
         if (m_volume > m_capcity) {
            m_volume = m_capcity;
         }
      }
      return *this;
   }
   Container& Container::operator+=(int vol) {
      operator=(m_volume + vol);
      return *this;
   }
   Container& Container::operator++() {
      *this = (volume() + 1);
      return *this;
   }
   Container Container::operator++(int) {
      Container ret = *this;
      *this = (volume() + 1);
      return ret;
   }

   Container& Container::operator+=(Container& C){
      if (m_capcity - m_volume >= C.volume()) {
         operator=(m_volume + C.volume());
         C.operator=(0);
      }
      else {
         C.operator=(C.volume() - (m_capcity - m_volume));
         m_volume = m_capcity;
      }
      return *this;
   }
   int Container::volume() const {
      return m_volume;
   }
   int Container::capacity() const{
      return m_capcity;
   }
   bool Container::isValid() const{
      return m_capcity > 0;
   }
   bool Container::operator!()const {
      //return m_capcity <= 0;
      return !isValid();
   }
   void Container::clear() {
      if (!isValid()) {
         m_capcity = 250;
         m_volume = 0;
      }
   }
   std::ostream& Container::display(std::ostream& ostr)const{ 
      if (isValid()) {
         ostr << "CN:[";
         ostr.width(8);
         ostr.setf(ios::right);
         ostr << m_volume;
         ostr << "]/[";
         ostr.width(8);
         ostr << m_capcity;
         ostr << "]";
      }
      else {
         cout << "Bad Container!";
      }
      return ostr;
   }
   Container Container::operator+(Container& right) {
      Container ret(capacity() + right.capacity(), volume() + right.volume());
      right.operator=(0);
      //operator=(0);
      *this = 0;
      return ret;
   }
   std::istream& Container::read(std::istream& istr){
      int vol, cap;
      istr >> vol;
      istr.ignore();
      istr >> cap;
      if (!istr.fail()) {
         if (vol >= 0 && cap > 0 && cap > vol) {
            m_capcity = cap;
            *this = vol;
         }
         else {
            m_capcity = -1;
         }
      }
      else {
         m_capcity = -1; // based on business logic, this may change
      }
      return istr;
   }
   Container& Container::operator=(Container& C) {
      return *this = C.volume();
      
   }
   Container& Container::operator=(Container C){
      return *this = C.volume();
   }
   Container& Container::operator-=(int vol) {
      if (volume() > vol) {
         *this = (volume() - vol);
      }
      else {
         *this = 0;
      }
      return *this;
   }
   //Container operator+(Container& left, Container& right) {
   //   Container ret(left.capacity() + right.capacity(), left.volume() + right.volume());
   //   right.operator=(0);
   //   left.operator=(0);
   //   return ret;
   //}
   std::ostream& operator<<(std::ostream& leftOper, const Container& righOper) {
      return righOper.display(leftOper);
   }

   std::istream& operator>>(std::istream& leftOper, Container& righOper) {
      return righOper.read(leftOper);
   }

   Container& operator--(Container& operand)   {
      operand = (operand.volume() - 1);
      return operand;
   }

   Container operator--(Container& operand, int)  {
      Container ret = operand;
      operand = (operand.volume() - 1);
      return ret;
   }

}
#include "Container.h"
#include <iostream>
using namespace std;
namespace sdds {
   Container::Container(double capacity, double value) {
      if (capacity > 0 && capacity >= value) {
         m_capacity = capacity;
         m_volume = value;
      }
      else {
         m_capacity = -1;
      }
   }
   Container& Container::operator=(double value) {
      if (value >= 0.0) {
         m_volume = value;
         if (m_volume > m_capacity) {
            m_volume = m_capacity;
         }
      }
      else {
         m_capacity = -1;
      }
      return *this;
   }
   std::ostream& Container::display(std::ostream& ostr) const {
      ostr << "Cn:[";
      ostr.setf(ios::right);
      ostr.width(10);
      ostr.setf(ios::fixed);
      ostr.precision(2);
      ostr << volume();
      ostr.unsetf(ios::right);
      ostr << "]/[";
      ostr.setf(ios::right);
      ostr.width(10);
      ostr.setf(ios::fixed);
      ostr.precision(2);
      ostr << capacity();
      ostr.unsetf(ios::right);
      ostr << "]";
      return ostr;
   }
   std::istream& Container::read(std::istream& istr){
      istr >> m_volume;
      istr.ignore();
      istr >> m_capacity;
      if (istr.fail()) {
         m_capacity = -1;
      }
      return istr;
   }
   Container& Container::operator+=(double value) {
      operator=(m_volume + value);
      return *this;
   } 
   Container& Container::operator+=(Container& cnt){
      if (m_capacity - m_volume >= cnt.volume()) {
         operator=(m_volume + cnt.volume());
         //*this = (m_volume + cnt.volume()); // same as above
         cnt = 0.0;
      }
      else {
         cnt = (cnt.volume() - (m_capacity - m_volume));
         m_volume = m_capacity;
      }
      return *this;
   }
   double Container::volume() const {
      return m_volume;
   }
   double Container::capacity() const{
      return m_capacity;
   }
   bool Container::isSafeInvalidEmpty() const{
      return m_capacity < 0.0001; // capacity is zero
   }

   bool Container::operator!() const{
      return m_capacity < 0;
   }

   Container& Container::operator++(){
      return *this = (m_volume + 1);
   }

   Container Container::operator++(int){
      Container copy = *this;
      *this = (m_volume + 1);
      return copy;
   }

   void Container::clear(){
      m_capacity = 250.0;
      m_volume = 0.0;
   }
   
   bool Container::isEmpty()const {
      return isSafeInvalidEmpty() || m_volume < 0.0001;
   }

  /* Container operator+(Container& leftOper, Container& rightOper) {
      Container ret(leftOper.capacity() + rightOper.capacity(),
         leftOper.volume() + rightOper.volume());
      return ret;
   }*/
   Container Container::operator+(Container& rightOper) {
      Container ret(capacity() + rightOper.capacity(),
         volume() + rightOper.volume());
      *this = 0;
      rightOper = 0;
      return ret;
   }

   std::ostream& operator<<(std::ostream& leftOper, const Container& rightOper){
      return rightOper.display(leftOper);
   }

   std::istream& operator>>(std::istream& leftOper, Container& rightOper) {
      return rightOper.read(leftOper);
   }
   Container& operator--(Container& oper){
      oper = (oper.volume() - 1);
      return oper;
   }
   Container& Container::operator-=(double vol) {
      if (m_volume > vol) {
         m_volume -= vol;
      }
      else {
         m_volume = 0.0;
      }
      return *this;
   }

}

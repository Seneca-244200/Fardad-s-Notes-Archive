#include <iostream>
#include "Container.h"
using namespace std;
namespace sdds {
   bool Container::isValid()const{
      return m_capacity > 0;
   }
   Container::Container(int cap, int vol){
      if (cap > 0 && vol <= cap) {
         m_volume = vol;
         m_capacity = cap;
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
      }
      return *this;
   }

   Container& Container::operator+=(int vol){
      operator=(m_volume + vol);
      //*this = m_volume + vol;
      return *this;
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
      istr >> m_volume;
      istr.ignore();
      return istr >> m_capacity;
   }

   Container operator+(Container& left, Container& right)
   {
      Container res(left.capacity()+right.capacity(), 
                   left.volume() + right.volume());
      left.operator=(0);
      right.operator=(0);
      return res;
   }

   std::ostream& operator<<(std::ostream& left, const Container& right){
      return right.display(left);
   }

   std::istream& operator>>(std::istream& left, Container& right){
      return right.read(left);
   }


}
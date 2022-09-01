#include "Container.h"
#include <iostream>
using namespace std;
namespace sdds {
   Container::Container(double capacity, double value) {
      if (capacity > 0 && capacity >= value) {
         m_capacity = capacity;
         m_volume = value;
      }
   }
   Container& Container::set(double value) {
      if (value >= 0.0) {
         m_volume = value;
         if (m_volume > m_capacity) {
            m_volume = m_capacity;
         }
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
   Container& Container::operator+=(double value) {
      set(m_volume + value);
      return *this;
   } 
   Container& Container::operator+=(Container& cnt){
      if (m_capacity - m_volume >= cnt.volume()) {
         set(m_volume + cnt.volume());
         cnt.set(0.0);
      }
      else {
         cnt.set(cnt.volume() - (m_capacity - m_volume));
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
   bool Container::isEmpty()const {
      return isSafeInvalidEmpty() || m_volume < 0.0001;
   }

   Container sum(Container& first, Container& second){
      Container ret(first.capacity()+second.capacity(),
                      first.volume() + second.volume());
      return ret;
   }

}

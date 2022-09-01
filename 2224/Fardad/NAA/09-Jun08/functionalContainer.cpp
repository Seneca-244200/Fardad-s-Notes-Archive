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

   Container& Container::set(int vol){
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

   Container& Container::add(int vol){
      set(m_volume + vol);
      return *this;
   }

   Container& Container::add(Container& C){
      if (C.isValid()) {
         if (m_capacity - m_volume >= C.volume()) {
            add(C.volume());
            C.set(0);
         }
         else { // has left over
            C.set(C.volume() - (m_capacity - m_volume));
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

   Container sum(Container& left, Container& right)
   {
      Container res(left.capacity()+right.capacity(), 
                   left.volume() + right.volume());
      left.set(0);
      right.set(0);
      return res;
   }


}
#include <iostream>
#include "Container.h"
using namespace std;
namespace sdds {
   Container::Container(int cap, int vol) {
      m_volume = vol;
      m_capcity = cap;
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
   std::ostream& Container::display(std::ostream& ostr)const{ 
      ostr << "CN:[";
      ostr.width(8);
      ostr.setf(ios::right);
      ostr << m_volume;
      ostr << "]/[";
      ostr.width(8);
      ostr << m_capcity;
      ostr << "]";
      return ostr;
   }

   Container operator+(Container& left, Container& right) {
      Container ret(left.capacity() + right.capacity(), left.volume() + right.volume());
      right.operator=(0);
      left.operator=(0);
      return ret;
   }
   std::ostream& operator<<(std::ostream& leftOper, const Container& righOper) {
      return righOper.display(leftOper);
   }

}
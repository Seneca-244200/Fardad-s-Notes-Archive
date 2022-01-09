#include <iostream>
#include "Container.h"

using namespace std;
namespace sdds {
   void Container::setSafe() {
      m_value = m_capacity = -1;
   }
   int Container::handleOverflow() {
      int overflow = m_value - m_capacity;
      if (overflow > 0) {
         m_value = m_capacity;
      }
      else {
         overflow = 0;
      }
      return overflow;
   }
   Container::Container(int capacity,int value) :m_value(0) {
      if (value < 0 || capacity < 0) {
         setSafe();
      }
      else {
         m_value = value;
         m_capacity = capacity;
      }
#ifdef SDDS_LIFETIME
      cout << "Createing ";
      display() << endl;
#endif // SDDS_LIFETIME
   }
   Container& Container::operator+=(const Container& RO) {
      m_value += RO.m_value;
      handleOverflow();
      return *this;
   }
   Container& Container::operator=(const Container& Ro) {
      m_value = Ro.m_value;
      handleOverflow();
      return *this;
   }
   ostream& Container::display(ostream& output)const {
      output  << m_value << "/" << m_capacity;
      return output;
   }
   /*Container operator+(const Container& Ro)const {
      Container sum(this->m_value + Ro.m_value, this->m_capacity + Ro.m_capacity);
      return sum;
   }*/

   Container Container::operator+(const Container& Ro)const {
      return Container(this->m_value + Ro.m_value, this->m_capacity + Ro.m_capacity);
   }
   Container& Container::operator--() {
      if(m_value > 0)m_value--;
      return *this;
   }
   bool Container::operator!() const {
      return m_value == 0;
   }
   Container Container::operator++(int) {
      //Container before(m_value, m_capacity);
      Container before = *this; // same as above
      m_value++;
      handleOverflow();
      return before;
   }
   
   Container::operator int() const {
      return m_value;
   }



   Container::~Container() {
#ifdef SDDS_LIFETIME
      cout << "Killing ";
      display() << endl;
#endif // SDDS_LIFETIME
   }



   // Helpers:

   std::ostream& operator<<(std::ostream& ostr, const Container& Ro) {
      return Ro.display(ostr);
   }

   std::istream& operator>>(std::istream& istr, Container& Ro) {
      cout << "Value: ";
      istr >> Ro.m_value;
      cout << "Capacity: ";
      istr >> Ro.m_capacity;
      return istr;
   }

}
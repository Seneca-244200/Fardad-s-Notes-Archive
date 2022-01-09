#include <iostream>
#include "Container.h"
using namespace std;
namespace sdds {
   void Container::setSafe() {
      m_value = m_capacity = -1;
   }
   void Container::handleOverflow() {
      if (m_value > m_capacity) m_value = m_capacity;
   }

   Container::Container(int value, int capacity ) :m_value(0) {
      if (value < 0 || capacity < 0) {
         setSafe();
      }
      else {
         m_value = value;
         m_capacity = capacity;
         handleOverflow();
      }
#ifdef SDDS_SHOW_LIFETIME
      display(cout << "Creating ") << endl;;
#endif
   }
   Container::~Container() {
#ifdef SDDS_SHOW_LIFETIME
      display(cout << "Killing ") << endl;;
#endif
   }
   Container& Container::operator+=(const Container& Ro) {
      m_value += Ro.m_value;
      handleOverflow();
      return *this;
   }
   Container& Container::operator=(const Container& Ro) {
      m_value = Ro.m_value;
      handleOverflow();
      return *this;
   }
   Container Container::operator+(const Container& Ro)const {
      return Container(this->m_value + Ro.m_value, this->m_capacity + Ro.m_capacity);
   }

   /*bool Container::operator!() const {
      return m_value == 0;
   }*/

   Container& Container::operator++() {
      m_value++;
      handleOverflow();
      return *this;
   }

   Container Container::operator++(int) {
      Container before = *this;
      m_value++;
      handleOverflow();
      return before;
   }

   Container::operator int() const {
      return m_value;
   }

   Container::operator bool() const {
      return m_value > 0;
   }

   ostream& Container::display(ostream& output)const {
      output << m_value << "/" << m_capacity;
      return output;
   }




}
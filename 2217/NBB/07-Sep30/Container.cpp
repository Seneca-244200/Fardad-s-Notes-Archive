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

   Container::Container(int value, int capacity) :m_value(0) {
      if (value < 0 || capacity <= 0) {
         setSafe();
      }
      else {
         m_value = value;
         m_capacity = capacity;
         handleOverflow();
      }
#ifdef  SDDS_LIFETIME
      cout << "Creating "; 
      display() << endl;
#endif //  SDDS_LIFETIME

   }
   Container::~Container() {
#ifdef  SDDS_LIFETIME
      cout << "Killing ";
      display() << endl;
#endif //  SDDS_LIFETIME

   }
   Container& Container::operator+=(const Container& Ro) {
      this->m_value += Ro.m_value;
      handleOverflow();
      return *this;
   }

   Container& Container::operator=(const Container& Ro) {
      m_value = Ro.m_value;
      handleOverflow();
      return *this;
   }
   //Container Container::operator+(const Container& Ro) const {
   //   Container res(this->m_value + Ro.m_value, this->m_capacity + Ro.m_capacity);
   //   return res;
   //}
   Container Container::operator+(const Container& Ro) const {
      return Container(this->m_value + Ro.m_value, this->m_capacity + Ro.m_capacity);
   }


  /* bool Container::operator!()const {
      return m_value == 0;
   }*/

   Container::operator int()const {
      return m_value;
   }

   Container::operator bool()const {
      return m_value > 0;
   }


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




   ostream& Container::display(ostream& output) {
      output << m_value << "/" << m_capacity;
      return output;
   }




}
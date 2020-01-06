#include <iostream>
#include "Container.h"
using namespace std;
namespace sdds {
   Container::~Container() {

   }
   Container::Container() {
      set(0, maxCapacity);
   }
   Container::Container(int value) {
      set(value, maxCapacity);
   }
   Container& Container::operator++() {
      //     return operator+=(1);
      return(*this) += 1;
   }
   Container Container::operator++(int) {
      Container beforPlusPlus = *this;
      (*this) += 1;
      return beforPlusPlus;
   }
   bool Container::operator!() const {
      return isInSafeEmptyState();
   }
   Container& Container::operator+=(int value) {
      set(m_value + value);
      return *this;
   }
   Container& Container::operator+=(const Container& C) {
      return operator+=(C.m_value);
   }

   Container& Container::operator=(int value) {
      set(value);
      return *this;
   }
   Container::Container(int value, int capacity) {
      set(value, capacity);

   }


   void Container::set(int value) {
      if (value >= 0 && value <= m_capacity) {
         m_value = value;
      }
      else {
         set2SafeEmptyState();
      }
   }
   void Container::set(int value, int capacity) {
      if (capacity >= value && capacity <= maxCapacity) {
         if (value >= 0 && value <= capacity) {
            m_value = value;
            m_capacity = capacity;
         }
         else {
            set2SafeEmptyState();
         }
      }
      else {
         set2SafeEmptyState();
      }
   }
   void Container::set2SafeEmptyState() {
      m_value = -1;
   }
   bool Container::isInSafeEmptyState()const {
      return m_value < 0;
   }
   ostream& Container::display()const {
      if (isInSafeEmptyState()) {
         cout << "Invalid Container Object!";
      }
      else {
         cout << m_value << "/" << m_capacity;
      }
      return cout;
   }
}
#include <iostream>
#include "ContainerMemberBinary.h"
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
   Container& Container::operator+=(int value) {
      set(m_value + value);
      return *this;
   }
   Container& Container::operator=(int value) {
      set(value);
      return *this;
   }
   Container& Container::operator=(const Container& C) {
      set(C.m_value, C.m_capacity);
      return *this;
   }
   Container::Container(int value, int capacity) {
      set(value, capacity);
   }
   Container& Container::operator++() {
      return operator+=(1);
   }
   Container Container::operator++(int) {
      Container beforePlusPlus = *this;
      operator+=(1);
      return beforePlusPlus;
   }
   Container Container::operator+(const Container& ro)const {
      //Container 
      //   ReturnValue(m_value + ro.m_value, m_capacity + ro.m_capacity);
      //return ReturnValue;

      return Container(m_value + ro.m_value, m_capacity + ro.m_capacity);
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
   bool Container::operator!()const {
      return isInSafeEmptyState();
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
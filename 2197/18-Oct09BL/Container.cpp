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
   int Container::value() const {
      return m_value;
   }
   Container& Container::operator+=(const Container& C) {
      set(m_value + C.m_value);
      return *this;
   }
  /* Container Container::operator+(const Container& C)const {
      Container Copy = *this;
      Copy.set(m_value + C.m_value);
      Copy.m_capacity += C.m_capacity;
      return Copy;
   }*/
   Container Container::operator+(const Container& C)const {
      return Container(m_value + C.m_value, m_capacity + C.m_capacity);
   }

   Container& Container::operator=(int value) {
      set(value);
      return *this;
   }
   Container::Container(int value, int capacity) {
      set(value, capacity);

   }


   Container& Container::set(int value) {
      if (value >= 0 && value <= m_capacity) {
         m_value = value;
      }
      else {
         set2SafeEmptyState();
      }
      return *this;
   }
   Container& Container::set(int value, int capacity) {
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
      return *this;
   }
   void Container::set2SafeEmptyState() {
      m_value = -1;
   }
   bool Container::isInSafeEmptyState()const {
      return m_value < 0;
   }
   ostream& Container::display(ostream& os)const {
      if (isInSafeEmptyState()) {
         os << "Invalid Container Object!";
      }
      else {
         os << m_value << "/" << m_capacity;
      }
      return os;
   }
   Container::operator int()const {
      return m_value;
   }
   Container::operator double()const {
      return double(m_value) / m_capacity;
   }
 /*  Container operator-(const Container& lo,
      const Container& ro) {
      Container Result = lo;
      Result.set(lo.m_value - ro.m_value);
      return Result;
   }*/
   Container operator-(const Container& lo,
      const Container& ro) {
      Container Result = lo;
      Result.set(lo.value() - ro.value());
      return Result;
   }
   std::ostream& operator<<(std::ostream& os,
                              const Container& ro) {
      return ro.display(os);
   }

}
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
   Container& Container::operator+=(int value) {
      set(m_value + value);
      return *this;
   }
   Container& Container::operator+=(const Container& C) {
      set(m_value, +C.m_value);
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
   int Container::value()const {
      return m_value;
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
   ostream& Container::display(ostream& os)const {
      if (isInSafeEmptyState()) {
         os << "Invalid Container Object!";
      }
      else {
         os << m_value << "/" << m_capacity;
      }
      return os;
   }
   std::istream& Container::read(std::istream& is = std::cin) {
      int value;
      int capacity;
      is >> value;
      is.ignore();
      is >> capacity;
      return is.ignore(1000, '\n');
   }
   Container Container::operator+(const Container& rightOperand)const{
      Container result = *this;
      result.m_capacity += rightOperand.m_capacity;
      result.set(result.m_value, rightOperand.m_value);
      return result;
   }

 /*  Container operator-(const Container& leftOper,
           const Container& rightOper) {
      Container result = leftOper;
      result.set(-rightOper.m_value);
      return result;
   }*/

   Container::operator int()const {
      return m_value;
   }
   Container::operator double()const {
      return double(m_value) / m_capacity;
   }

   Container operator-(const Container& leftOper,
      const Container& rightOper) {
      Container result = leftOper;
      result.set(-rightOper.value());
      return result;
   }
   std::ostream& operator<<(std::ostream& os, const Container& RO) {
      return RO.display(os);
   }
   std::istream& operator>>(std::istream& is, Container& RO) {
      return RO.read(is);
   }

 }
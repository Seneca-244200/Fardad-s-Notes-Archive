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
   Container::operator int() const{
      return m_value;
   }
   Container::operator bool()const {
      return !isInSafeEmptyState();
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
   Container Container::operator+(const Container& RO)const {
      Container current = *this;
      current.m_value += RO.m_value;
      current.m_capacity += RO.m_capacity;
      return current;
   }

   Container& Container::operator=(int value) {
      set(value);
      return *this;
   }
   Container::Container(int value, int capacity) {
      set(value, capacity);

   }
   std::istream& Container::read(std::istream& is = std::cin) {
      int value;
      int capacity;
      is >> value;
      is.ignore();
      is >> capacity;
      return is.ignore(1000, '\n');
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
   ostream& Container::display(ostream& os)const {
      if (isInSafeEmptyState()) {
         os << "Invalid Container Object!";
      }
      else {
         os << m_value << "/" << m_capacity;
      }
      return os;
   }

   Container operator-(const Container& leftOperand,
      const Container& righOperand) {
      Container result = leftOperand;
      result.set(int(leftOperand) - int(righOperand));
      return result;
   }
   /*
   //must be a friend because of bad design
   Container operator-(const Container& leftOperand,
      const Container& righOperand) {
      Container result = leftOperand;
      result.set(leftOperand.m_value - righOperand.m_value);
      return result;
   }*/

   std::ostream& operator<<(std::ostream& os,
      const Container& rightOperand) {
      return rightOperand.display(os);
   }
   std::istream& operator>>(std::istream& is,
      Container& rightOperand) {
      return rightOperand.read(is);
   }

}
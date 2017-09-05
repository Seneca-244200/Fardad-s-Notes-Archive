#include <iostream>
using namespace std;
class Bottle {
   int m_capacity; // in CC
   int m_quantity;  // in CC, 0 <= m_value <= m_capacity
public:
   Bottle(int quantity = 0, int capacity = 500) { // 4 marks
      m_capacity = capacity;
      this->quantity(quantity);
   }
   void quantity(int value) { // 2 marks
      m_quantity = value >= 0 && value <= m_capacity ? value : -1;
   }
   int quantity()const { // 2 marks
      return m_quantity;
   }
   int capacity() const { // 2 marks;
      return m_capacity;
   }

   Bottle& operator+(const Bottle& Ro)const {  // 4 marks
      return Bottle(m_quantity + Ro.m_quantity);
   }
   Bottle& operator+=(const Bottle& Ro) {  // 4 marks]
      quantity(quantity() + Ro.quantity());
      return *this;
   }
   Bottle& operator++() {  // 4 marks
      quantity(quantity() + 1);
      return *this;
   }
   Bottle& operator++(int) {  // 4 marks
      Bottle B = *this;
      quantity(quantity() + 1);
      return *this;
   }
   void empty() {  // 1 mark
      quantity(0);
   }
   operator double()const{
      return double(quantity()) / capacity();
   }
};
ostream& operator<<(ostream& ostr, const Bottle& B) {
   return ostr << B.quantity() << "CC/" << B.capacity();
}

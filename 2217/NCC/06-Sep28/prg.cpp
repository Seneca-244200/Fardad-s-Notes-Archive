#include <iostream>
using namespace std;
class Container {
   int m_value;
   int m_capacity = 0;
   void setSafe() {
      m_value = m_capacity = -1;
   }
   void handleOverflow() {
      if (m_value > m_capacity) m_value = m_capacity;
   }
public:
   Container(int value = 0, int capacity = 250) :m_value(0) {
      if (value < 0 || capacity < 0) {
         setSafe();
      }
      else {
         m_value = value;
         m_capacity = capacity;
         handleOverflow();
      }
   }

   ostream& display(ostream& output = std::cout) {
      output << "Container: " << m_value << "/" << m_capacity;
      return output;
   }
   //void operator+=(Container& Ro) {  we'll do this later
   //   int leftover = Ro.m_value - (m_capacity - m_value);
   //   if (leftover < 0) leftover = 0;
   //   m_value += Ro.m_value;
   //   handleOverflow();
   //   Ro.m_value = leftover;
   //}
   Container& operator+=(const Container& Ro) {
      m_value += Ro.m_value;
      handleOverflow();
      return *this;
   }
   Container& operator=(const Container& Ro) {
      m_value = Ro.m_value;
      handleOverflow();
      return *this;
   }
};


int main() {
   Container C(100, 150);
   Container D;
   Container E(200, 230);
   Container tooMuch(1000, 500);
   C.display() << endl;
   D.display() << endl;
   E.display() << endl;

   E = D += C;   // D.+=(C)  D.operator+=(C) <- this will be the function call that is made when += is invoked;

   C.display() << endl;
   D.display() << endl;
   E.display() << endl;
   tooMuch.display() << endl;
   return 0;
}
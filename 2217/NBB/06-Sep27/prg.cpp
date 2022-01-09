#include <iostream>
using namespace std;
class Container {
   int m_value;
   int m_capacity = 0;
   void setSafe() {
      m_value = m_capacity = -1;
   }
   void correctOverflow() {
      if (m_value > m_capacity) m_value = m_capacity;
   }
public:
   Container(int value = 0, int capacity = 250):m_value(0) {
      if (value < 0 || capacity < 0) {
         setSafe();
      }
      else {
         m_value = value;
         m_capacity = capacity;
         correctOverflow();
      }
   }

   Container& operator+=(const Container& Ro) {
      m_value += Ro.m_value;
      correctOverflow();
      return *this;
   }
   Container& operator=(const Container& Ro) {
      m_value = Ro.m_value;
      correctOverflow();
      return *this;
   }
   ostream& display(ostream& output = std::cout) {
      output << "Container: " << m_value << "/" << m_capacity;
      return output;
   }

};


int main() {
   Container C(100, 300);
   Container D;
   Container E(200, 230);
   Container tooMuch(1000, 500);
   C.display() << endl;
   D.display() << endl;
   E.display() << endl;

   D = E += C;  // E.operator+=(C)
   
   C.display() << endl;
   D.display() << endl;
   E.display() << endl;
   tooMuch.display() << endl;
   return 0;
}
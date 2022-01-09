#include <iostream>
using namespace std;
class Container {
   int m_value;
   int m_capacity = 0;
   void setSafe() {
      m_value = m_capacity = -1;
   }
   int handleOverflow() {
      int overflow = m_value - m_capacity;
      if (overflow > 0) {
         m_capacity = m_value;
      }
      else {
         overflow = 0;
      }
      return overflow;
   }
public:
   Container(int value = 0, int capacity = 250):m_value(0) {
      if (value < 0 || capacity < 0) {
         setSafe();
      }
      else {
         m_value = value;
         m_capacity = capacity;
      }
   }
   Container& operator+=(const Container& RO) {
      m_value += RO.m_value;
      handleOverflow();
      return *this;
   }
   Container& operator=(const Container& Ro) {
      m_value = Ro.m_value;
      handleOverflow();
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
   Container E(50);
   // int sum;
   E = D = C += E; // C.operator+=(E)
   //cout << sum << endl;
   C.display() << endl;
   D.display() << endl;
   E.display() << endl;
   return 0;
}
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

};


int main() {
   Container C(100, 300);
   Container D;
   Container E(200, 230);
   Container tooMuch(1000, 500);
 
   return 0;
}

#include <iostream>
//#define SDDS_LIFETIME
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
         m_value = m_capacity;
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
#ifdef SDDS_LIFETIME
      cout << "Createing ";
      display() << endl;
#endif // SDDS_LIFETIME
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
   /*Container operator+(const Container& Ro)const {
      Container sum(this->m_value + Ro.m_value, this->m_capacity + Ro.m_capacity);
      return sum;
   }*/

   Container operator+(const Container& Ro)const {
      return Container(this->m_value + Ro.m_value, this->m_capacity + Ro.m_capacity);
   }
   ~Container() {
#ifdef SDDS_LIFETIME
      cout << "Killing ";
      display() << endl;
#endif // SDDS_LIFETIME
   }
};


int main() {
   int a{ 10 };
   int b{ 20 };
   int c;
   //c = a += b;  // b will be added to a and a is retrued
   c = a + b;     // sum of a and b is calculated and sum is returned 
   Container C(100, 300);
   Container D;
   Container E(50);

   C.display() << endl;
   D.display() << endl;
   E.display() << endl;

   D = C += E; // C.operator+=(E)
   //cout << sum << endl;
   C.display() << endl;
   D.display() << endl;
   E.display() << endl;

   E = D + C;  // D.operator+(C);
   C.display() << endl;
   D.display() << endl;
   E.display() << endl;

   return 0;
}
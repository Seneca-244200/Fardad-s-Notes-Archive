#include <iostream>
using namespace std;

class Bucket {
   double m_value{};
   double m_capacity{ 10.00 };
public:
   Bucket() = default;
   Bucket(double value, double capacity) {
      m_value = value;
      m_capacity = capacity;
   }
   void display()const {
      cout.setf(ios::fixed);
      cout.precision(2);
      cout << "Bucket(" << m_value << "/" << m_capacity << ")" << endl;
   }
   double operator+=(double value) {
      double ret{};
      if (m_value + value > m_capacity) {
         ret = (m_value + value) - m_capacity;
         m_value = m_capacity;
      }
      else {
         m_value += value;
      }
      return ret;
   }
};


int main() {
   int a;
   double overflow{};
   cout.setf(ios::fixed);
   cout.precision(2);
   Bucket B;
   B.display();
   cout << "adding 5 liters" << endl;
   overflow = B += 5.0; // << this is an operator overload
   B.display();
   cout << "Overflow: " << overflow << endl;
   cout << "adding 7.5 liters" << endl;
   overflow = B += 7.5;
   B.display();
   cout << "Overflow: " << overflow << endl;
   return 0;
}
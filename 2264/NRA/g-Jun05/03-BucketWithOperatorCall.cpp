#include <iostream>
using namespace std;

class Bucket {
   double m_value{};
   double m_capacity{ 10.00 };
public:
   Bucket() = default;
   Bucket(double value, double capacity = 15) {
      m_value = value;
      m_capacity = capacity;
   }
   ostream& display()const {
      cout.setf(ios::fixed);
      cout.precision(2);
      cout << "(" << m_value << "/" << m_capacity << ")";
      return cout;
   }
   // operator overaload are always created using their function form.
   void operator=(double value) {
      m_value = value > m_capacity ? m_capacity : value;
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
   cout << "OOP244 NRA - Jun 05" << endl;
   Bucket B(10);
   B.display() << " is B content " << endl;
   B = 12; // B.operator=(12);
   B.display() << " is the new value " << endl;
   B += 1 ; // B.operator+=(1);
   B.display() << " added one!" << endl;

  


   return 0;
}
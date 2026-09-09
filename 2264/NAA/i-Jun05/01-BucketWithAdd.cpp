
#include <iostream>
using namespace std;
class Bucket {
   double m_value{};
   double m_capacity{ 15.00 };
   double correctValue(double& value)const {
      if (value < 0.0) value = 0.0;
      return value;
   }
public:
   Bucket() = default;
   Bucket(double capacity, double value = 0.0) {
      correctValue(value);
      if (value > capacity) value = capacity;
      m_capacity = capacity;
      m_value = value;
   }

   double add(double value) {
      correctValue(value);
      double overflow = (m_value + value) - m_capacity;
      if (overflow > 0) {
         m_value = m_capacity;
      }
      else {
         m_value += value;
      }
      correctValue(overflow);
      return overflow;
   }
   ostream& display()const {
      cout.setf(ios::fixed);
      cout.precision(2);
      cout << "(" << m_value << 
         "/" << m_capacity << ")";
      cout.unsetf(ios::fixed);
      return cout;
   }
};


int main() {
   cout << "OOP244 NAA - Jun 05" << endl;
   double overflow;
   Bucket B, C(20), D(10, 5);
   cout << "B Bucket has ";
   B.display() << " And C Bucket has ";
   C.display() << endl;
   cout << "D holds: ";
   D.display() << endl;
   overflow = B.add(8);
   B.display();
   cout << " Overflow: " << overflow << endl;
   overflow = C.add(8);
   C.display();
   cout << " Overflow: " << overflow << endl;
   overflow = D.add(8);
   D.display();
   cout << " Overflow: " << overflow << endl;

   return 0;
}
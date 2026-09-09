
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
   // operator overloads are alwasy implemented in fuction form
   void operator=(double value) {
      m_value = correctValue(value);
   }
   double operator+=(double value) {
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
   Bucket B;
   cout << "B Bucket has ";
   B.display() << endl;
   cout << "After adding 10: ";
   // you can call them in operator format
   
   B = 10 ; // B.operator=(10);
   
   B.display() << endl;
   cout << "Adding 3: ";
   B += 3 ;  // B.operator+=(3);
   B.display() << endl;
 
   return 0;
}








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
   Bucket(double capacity, double value = 0.0) {
      correctValue(value);
      if (value > capacity) value = capacity;
      m_capacity = capacity;
      m_value = value;
   }
   // operator overloads are alwasy implemented in fuction form
   Bucket& operator=(double value) {
      m_value = correctValue(value);
      return *this;
   }
   Bucket operator+(double value)const { // const makes sure there is no side-effect
      Bucket result(m_capacity, m_value + value);
      return result;
   }
};


int main() {
   cout << "OOP244 NAA - Jun 05" << endl;
   Bucket B, C(20, 5);
   // binary operators with no side effect
  
   /*
   * left operand is the owner
   * right operand is the other
   * the oparator@ must be const
   * return resutl by value
   B = C + 10;
   B = C. + (10);
   B = C.operator+(10); << you need to implement this
   */
   cout << "C: "; 
   C.display() << endl;
   cout << "B = C += 10" << endl;
   B = C + 10; // should create a Bucket that is 15/20
   cout << "C: ";
   C.display() << endl;
   cout << "B: ";
   B.display() << endl;



   return 0;
}
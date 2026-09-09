
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
   //unary operator with no side-effect
   ostream& operator~()const {
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
   Bucket& operator++(){
      //(*this) += 1;
      operator+=(1);
      return *this;
   }
   // int here does not mean the argument of the operator
   // it only means this ++ is post-fix
   Bucket operator++(int) {
      Bucket old = *this;
      operator+=(1);
      return old;
   }
   // if this object needs to be casted to an double
   operator double()const {
      return m_value;
   }
   double operator[](size_t index) {
      double res{-1};
      if (index == 0) res = m_capacity;
      else if (index == 1) res = m_value;
      return res;
   }
};


int main() {
   cout << "OOP244 NAA - Jun 05" << endl;
   Bucket B, C(20, 5);
   double valueOfBucket{};
   cout << "B: ";  ~B << endl;
   cout << "C: ";  ~C << endl;
   cout << "C = ++B; " << endl;
   C = ++B;
   cout << "B: ";  ~B << endl;
   cout << "C: ";  ~C << endl;
   cout << "C = B++; " << endl;
   C = B++;
   cout << "B: ";  ~B << endl;
   cout << "C: ";  ~C << endl;
   valueOfBucket = B;
   cout << "B has " << valueOfBucket << " value in it!" << endl;
   cout << "B has the value: " << B[1] << endl;
   cout << "B has the capacity: " << B[0] << endl;
   return 0;
}
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
   ostream& operator~()const {
      cout.setf(ios::fixed);
      cout.precision(2);
      cout << "(" << m_value << "/" << m_capacity << ")";
      return cout;
   }
   // operator overaload are always created using their function form.
   Bucket& operator=(double value) {
      m_value = value > m_capacity ? m_capacity : value;
      return *this;
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
   Bucket operator+(double value)const {
      Bucket result(m_value + value, m_capacity);
      return result;
   }
   Bucket& operator++() {
      operator+=(1);
      return *this;
   }
   // the int is NOT and argument, it is flag to idicate
   // this is a post fix operator
   Bucket operator++(int) {
      Bucket old = *this;
      operator+=(1);
      return old;
   }

};

// we just overloaded unary operator postfix with side-effect
int main() {
   cout << "OOP244 NRA - Jun 05" << endl;
   Bucket B(10) , C;
   // unary operator postfix with side-effect
   ~B << ": content of B" << endl;
   ~C << ": content of C" << endl;
   cout << "C = B++;" << endl;
   C = B++; // B.operator++(int);
   ~B << ": content of B" << endl;
   ~C << ": content of C" << endl;
   return 0;
}
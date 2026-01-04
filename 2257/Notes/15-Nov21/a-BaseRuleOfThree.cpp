#include <iostream>
using namespace std;
class Base {
   int m_data{};
public:
   Base() {
      cout << "Base Default" << endl;
   }
   Base(int data) :m_data(data) {
      cout << "Base(" << data << ")" << endl;
   }
   Base(const Base& other) :m_data{ other.m_data } {
      cout << "CpBase(" << m_data << ")" << endl;
   }
   const Base& operator=(const Base& other) {
      m_data = other.m_data * 2;
      cout << "Op=Base(" << other.m_data << ")x2" << endl;
      return *this;
   }
   virtual ~Base() {
      cout << "~Base(" << m_data << ")" << endl;
   }
   virtual int data()const {
      return m_data;
   }
};
ostream& operator<<(ostream& ostr, const Base& other) {
   return ostr << other.data();
}
int main() {
   cout << "OOP244 NAA" << endl;
   Base A;
   Base B = 20;
   Base C = B;
   A = C;

   cout << "A: " << A << endl;
   cout << "B: " << B << endl;
   cout << "C: " << C << endl;
   return 0;
} 
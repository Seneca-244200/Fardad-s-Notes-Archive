#include <iostream>
using namespace std;
class Container {
   int m_value{};
public:
   int value() const {
      return m_value;
   }
   Container() = default;
   Container(int value) :m_value(value) {};

   Container operator+(const Container& other)const {
      return Container(m_value + other.value());
   }
};
ostream& operator<< (ostream& ostr, const Container& C) {
   return ostr << "Container(" << C.value() << ")";
}


int main() {
   Container C = 20, D = 10, E;
   cout << "OOP244 NBB - Mar 23" << endl;
   cout << C << " | " << D << " | " << E << endl;
   E = C + D;
   cout << C << " | " << D << " | " << E << endl;

   return 0;
}
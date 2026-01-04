#include <iostream>
using namespace std;
class Container {
   int m_value{};
public:
   int value()const {
      return m_value;
   }
   Container() = default;
   Container(int value):m_value(value) {}
   Container operator+(const Container& other)const {
      return Container(m_value + other.value());
   }
};
ostream& operator<<(ostream& ostr, const Container& C) {
   return ostr << "Container(" << C.value() << ")";
}

int add(int a, int b) {
   return a + b;
}
double add(double a, double b) {
   return a + b;
}
Container add(Container a, Container b) {
   return a + b;
}

int main() {
   Container C = 20, D;
   int val;
   int a = 10, b;
   double x = 10.1, y;
   b = add(a, 30);
   cout << b << endl;

   y = add(x, 30.2);
   cout << y << endl;

   D = add(C, 50); // D = add(C, Container(50));
   cout << D << endl;
  


   return 0;
}
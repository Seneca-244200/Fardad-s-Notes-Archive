#include <iostream>
using namespace std;
class Container {
   int m_data;
public:
   Container(int data = 0) :m_data(data) {
   }
   ostream& display(ostream& os)const {
      return os << m_data;
   }
   Container& operator=(int value) {
      m_data = value;
      return *this;
   }
   Container operator+(const Container& R)const {
      return Container(m_data + R.m_data);
   }
};
ostream& operator<<(ostream& os, const Container& C) {
   return C.display(os);
}
/*
Container sum(Container x, Container y) {
   return x + y;
}
int sum(int x, int y) {
   return x + y;
}
double sum(double x, double y) {
   return x + y;
}
*/

// the binary + operator must be defined for the type
template <typename type>
type sum(type x, type y) {
   return x + y;
}

int main() {
   int a, b = 10;
   double e, f = 10.2;
   Container R, C(20),
      D = 50; // assignment at the moment of creation is NOT assignment,
              // but a one argument constructor
   R = 30;
   a = sum(b, 20);
   cout << a << endl;
   e = sum(f, 20.3);
   cout << e << endl;
   R = sum(C, D);
   cout << R << endl;
   
}
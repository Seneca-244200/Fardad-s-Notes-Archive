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


template <typename type>
type sum(type a, type b) {
   return a + b;
}



int main() {
   int a, b = 10;
   double e, f = 10.2;
   Container R, C(20),
      D = 50;// assignment at the moment of creation is NOT assignment,
              // but a one argument constructor
   R = 30; // operator =
   R = sum(C, D);
   cout << R << endl;
   a = sum(b, 20);
   cout << a << endl;
   e = sum(f, 15.66);
   cout << e << endl;
   return 0;
}



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
   Container operator+(const Container& R)const {
      return Container(m_data + R.m_data);
   }
};
ostream& operator<<(ostream& os, const Container& C) {
   return C.display(os);
}


template <typename type>
type sum(type x, type y) {
   return x + y;
}



int main() {
   int a, b = 30;
   double e, f = 20.3;
   Container R, C = 20,
      D = 50;

   a = sum(b, 40);
   cout << "a: " << a << endl;
   e = sum(f, 30.7234);
   cout << "b: " << e << endl;
   R = sum(C, D);
   cout << "R: " << R << endl;

   return 0;
}
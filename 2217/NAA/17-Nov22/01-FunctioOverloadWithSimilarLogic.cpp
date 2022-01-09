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

Container sum(Container x, Container y) {
   return x + y;
}
int sum(int x, int y) {
   return x + y;
}
double sum(double x, double y) {
   return x + y;
}



int main() {
   int a, b = 30;
   double e, f = 20.3;
   Container R, C = 20;

   a = sum(b, 40);
   e = sum(f, 30.7234);
   R = sum(C, 50);    // sum(Container x = C, Container y = 50)  50 will be casted to a Container

   cout << "a: " << a << endl;
   cout << "b: " << e << endl;
   cout << "R: " << R << endl;
   return 0;
}
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
class Mark {
   int m_value;
public:
   Mark(int data = 0) :m_value(data) {
   }
   ostream& display(ostream& os)const {
      return os << "M" << m_value;
   }
   Mark operator+(const Mark& R)const {
      return Mark(m_value + R.m_value);
   }
};
ostream& operator<<(ostream& os, const Mark& C) {
   return C.display(os);
}


class Container {
   int m_data;
public:
   Container(int data = 0) :m_data(data) {
   }
   ostream& display(ostream& os)const {
      return os << "C" << m_data;
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


//ChangeMe sum(ChangeMe x, ChangeMe y) {
//   return x + y;
//}

Mark sum(Mark x, Mark y) {
   return x + y;
}

int main() {
   int a, b = 30;
   double e, f = 20.3;
   Container C, D = 40, E = 50;
   Mark M, N=40, O=30;
   a = sum(b, 40);
   cout << "a: " << a << endl;
   e = sum(f, 40.1234);
   cout << "e: " << e << endl;
   C = sum(D, E);
   cout << "C: " << C << endl;
   M = sum(N, O);
   cout << "M: " << M << endl;
   return 0;
}
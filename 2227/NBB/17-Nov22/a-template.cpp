#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;

class Container {
   int m_data;
public:
   Container(int data = 0) :m_data(data) {
   }
   Container operator+(const Container& Ro) {
      return Container(m_data + Ro.m_data);
   }
   ostream& display(ostream& os)const {
      return os << "Cn: " << m_data;
   }
};

ostream& operator<<(ostream& os, const Container& C) {
   return C.display(os);
}

class Mark {
   int m_data;
public:
   Mark(int data = 0) : m_data{ data } {
   }
   Mark operator+(const Mark& Ro) {
      return Mark(m_data + Ro.m_data);
   }
   ostream& display(ostream& os)const {
      return os << "Mk: " << m_data;
   }
};
ostream& operator<<(ostream& os, const Mark& c) {
   return c.display(os);
}

//int sum(int a, int b) {
//   return a + b;
//}
//double sum(double a, double b) {
//   return a + b;
//}
//Mark sum(Mark a, Mark b) {
//   return a + b;
//}
//Container sum(Container a, Container b) {
//   return a + b;
//}

template <typename type>
type sum(type a, type b) {
   return a + b;
}
int main() {
   double x = 1.1, y{ 2.2 }, z{};
   int i = 1, j{ 2 }, k{};
   Mark m = 50, n{ 30 }, o{};
   Container c = 100, d{ 200 }, e{};
   z = sum(x, y);
   cout << z << endl;
   k = sum(i, j);
   cout << k << endl;
   o = sum(m, n);
   cout << o << endl;
   e = sum(c, d);
   cout << e << endl;
   return 0;
}
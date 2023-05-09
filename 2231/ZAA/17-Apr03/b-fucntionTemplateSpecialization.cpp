#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
class Container {
   int m_data;
public:
   Container(int data = 0) :m_data(data) {
   }
   int data() {
      return m_data;
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
   Mark operator+(const Mark& Ro)const {
      return Mark(m_data + Ro.m_data);
   }
   ostream& display(ostream& os)const {
      return os << "Mk: " << m_data;
   }
};
ostream& operator<<(ostream& os, const Mark& c) {
   return c.display(os);
}

/// <summary>
/// returns the sum of a and b
/// </summary>
/// <typeparam name="T">Must suprot opertaor+ and copy construction</typeparam>
/// <param name="a">left parameter</param>
/// <param name="b">right parameter</param>
/// <returns>copy of sum of a and b</returns>
template <typename T>
T sum(T a, T b) {
   return a + b;
}

template<>  // specialization for the above sum function but only for <Container> type
Container sum<Container>(Container A, Container B) { // your overload always comes first.
   cout << "This one is different!" << endl;
   return Container( A.data() + B.data() );
}

int main() {
   double x = 1.1, y{ 2.2 }, z{};
   int i = 10, j = 20, k;
   Mark m = 50, n{ 30 }, o{};
   Container c = 100, d{ 200 }, e{};
   k = sum(i, j);
   cout << k << endl;
   z = sum(x, y);
   cout << z << endl;
   o = sum(m, n);
   cout << o << endl;
   e = sum(c, d);
   cout << e << endl;
   return 0;
}
#include <iostream>
using namespace std;
class Container {
  int m_value;
public:
  Container(int value = 0) {
    m_value = value;
  }
  int value()const {
    return m_value;
  }
  void value(int thevalue) {
    m_value = thevalue;
  }
  Container operator+(const Container& C)const {
    return Container(m_value + C.m_value);
  }
};
ostream& operator<<(ostream& ostr, const Container& C) {
  return ostr << "Container::value-> " << C.value();
}


template <class T>
T add(T v1, T v2) {
  return v1 + v2;
}

int main() {
  int a = 10;
  int b = 20;
  int c;
  double x = 1.1;
  double y = 2.2;
  double z;
  Container i = 5;
  Container j = 10;
  Container k;
  ch = add(ch1, ch2);
  cout << ch << endl;
  c = add(a, b);
  cout << c << endl;
  z = add(x, y);
  cout << z << endl;
  k = add(i, j);
  cout << k << endl;
  return 0;
}
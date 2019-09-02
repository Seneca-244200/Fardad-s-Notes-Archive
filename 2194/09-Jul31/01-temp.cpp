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
int add(int v1, int v2) {
  return v1 + v2;
}
double add(double v1, double v2) {
  return v1 + v2;
}
Container add(Container v1, Container v2) {
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
  c = add(a, b);
  cout << c << endl;
  z = add(x, y);
  cout << z << endl;
  k = add(i, j);
  cout << k << endl;
  return 0;
}


#include <iostream>
#include <iomanip>
using namespace std;
class Money {
  double m_value;
  void set(const Money& m) {
    m_value = m.m_value;
  }
  void set(double value) {
    m_value = value;
  }
public:
  double getValue()const {
    return m_value;
  }
  Money&  operator=(const Money& Rop) {
    m_value = Rop.m_value;
    return *this;
  }
  Money&  operator=(double Rop) {
    m_value = Rop;
    return *this;
  }
  Money operator+=(const Money& Rop) {
    m_value += Rop.m_value;
    return *this;
  }
  Money operator+(const Money& Rop)const {
    //Money tempSum(m_value + Rop.m_value);
    //return tempSum;
    return Money(m_value + Rop.m_value);
  }
  Money(double value = 0.0) :m_value(value) {}
  ostream& display(ostream& os)const {
    return os << fixed << setprecision(2) << m_value;
  }
  istream& read(istream& os) {
    return os >> m_value;
  }
  Money& operator++() {
    m_value += 1.0;
    return *this;
  }
  Money& operator--() {
    m_value -= 1.0;
    return *this;
  }
};

Money operator-(const Money& Lop, const Money& Rop) {
  return Money(Lop.getValue() - Rop.getValue());
}

ostream& operator << (ostream& Los, const Money& Rop) {
  return Rop.display(Los);
}
istream& operator >> (istream& Lis, Money& Rop) {
  return Rop.read(Lis);
}


int main() {
  Money m = 24.56;
  Money n = 123.34;
  Money q;
  cout << "How much money you got? ";
  cin >> q;
  cout << "You got: " << q << " Dollars!" << endl;
  ++q;
  cout << "Added a Dollar: " << q << endl;
  q = m += n;
  cout << n << endl;
  cout << m << endl;
  cout << q << endl;
  m = 4.0;
  n = 5.0;
  q = m + n;
  cout << q << endl;
  q = n - m;
  cout << q << endl;
  return 0;
}
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
  ostream& display(ostream& os) {
    return os << fixed << setprecision(2) << m_value;
  }
  friend Money operator-(const Money& Lop, const Money& Rop);
};

// worst thing you can do in your life!!!! 
Money operator-(const Money& Lop, const Money& Rop) {
  return Money(Lop.m_value - Rop.m_value); 
}

int main() {
  Money m = 24.56;
  Money n = 123.34;
  Money q;
  q = m += n;
  m.display(cout) << endl;
  q.display(cout) << endl;
  m = 4.0;
  n = 5.0;
  q = m + n;
  q.display(cout) << endl;
  q = n - m;

  return 0;
}
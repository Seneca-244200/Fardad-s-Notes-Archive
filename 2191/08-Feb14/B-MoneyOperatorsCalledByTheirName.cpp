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
  void operator=(const Money& m) {
    m_value = m.m_value;
  }
  void operator=(double value) {
    m_value = value;
  }
  Money(double value) :m_value(value) {
    // m_value = value; setting m_value
  }
  ostream& display(ostream& os) {
    return os << fixed << setprecision(2) << m_value;
  }
};


int main() {
  Money m = 24.56;
  Money n = 123.34;
  m.display(cout) << endl;
  m.operator=(n);
  m.display(cout) << endl;
  m.operator=(3456.56);
  m.display(cout) << endl;
  return 0;
}
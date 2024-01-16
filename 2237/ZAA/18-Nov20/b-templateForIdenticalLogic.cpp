#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
class Displayable {
public:
   virtual ostream& display(ostream& os)const = 0;
};
ostream& operator<<(ostream& ostr, const Displayable& D) {
   return D.display(ostr);
}
class Container : public Displayable{
   double m_data;
public:
   Container(double data = 0) :m_data{ data } {};
   Container operator+(const Container& Ro)const { // binary operator+ with not side effect
      return Container(m_data + Ro.m_data);
   }
   ostream& display(ostream& os)const {
      os.precision(2);
      os.setf(ios::fixed);
      return os << "Cn: " << m_data;
   }
};
class Mark : public Displayable {
   int m_data;
public:
   Mark(int data = 0) : m_data{ data } {
   }
   Mark operator+(const Mark& Ro)const {
      return Mark((m_data + Ro.m_data > 100) ? 100 : m_data + Ro.m_data);
   }
   ostream& display(ostream& os)const {
      return os << "Mk: " << m_data;
   }
};

// the type is a placeholder that is to be
// changed with the type based on the usage
// of the fucntion
template <typename type>
type addAndDisplay(type a, type b) {
   type c = a + b;
   cout << "Sum is: " << c << endl;
   return c;
}


int main() {
   int a = 10, b = 20, c;
   double d = 10.1, e = 20.2, f;
   Mark m = 50, n = 40, o;
   Container p = 100.25, q = 200.35, r;
   c = addAndDisplay(a, b);
   cout << "the Function returned: " << c << endl;
   f = addAndDisplay(d, e);
   cout << "the Function returned: " << f << endl;
   o = addAndDisplay(m, n);
   cout << "the Function returned: " << o << endl;
   r = addAndDisplay(p, q);
   cout << "the Function returned: " << r << endl;
   return 0;
}
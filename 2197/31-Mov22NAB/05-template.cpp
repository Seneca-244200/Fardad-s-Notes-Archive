
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
   return ostr << "C.value: " << C.value();
}


template <typename type>
type add(type x, type y) {
   return x + y;
}



int main() {
   int
      a = 10, b = 20, c;
   double
      e = 2.2, f = 3.3, g;
   Container
      i = 20, j = 30, k;
   c = add(a, b);
   cout << c << endl;
   g = add(e, f);
   cout << g << endl;
   k = add(i, j);
   cout << k << endl;

   return 0;
}
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


template <typename Type>
Type add(Type a, Type b) {
   return a + b;
}



int main() {
   Container C = 3, D = 4, E;
   int i = 3, j = 4, k;
   double m = 3.3, n = 4.4, l;
   k = add(i, j);
   cout << k << endl;
   l = add(m, n);
   cout << l << endl;
   E = add(C, D);
   cout << E << endl;
   return 0;
}
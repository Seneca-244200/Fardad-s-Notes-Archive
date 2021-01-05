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


//
//int add(int a, int b) {
//   return a + b;
//}
//double add(double a, double b) {
//   return a + b;
//}
//Container add(Container a, Container b) {
//   return a + b;
//}

template <typename placeHolder>
placeHolder add(placeHolder a, placeHolder b) {
   return a + b;
}



int main() {
   Container C = 3, D = 4, E;
  /* double m = 3.3, n = 4.4, l;
   int i = 3, j = 4, k;
   k = add(i, j);
   cout << k << endl;
   l = add(m, n);
   cout << l << endl; */
   E = add(C, D);
   cout << E << endl;
   return 0;
}
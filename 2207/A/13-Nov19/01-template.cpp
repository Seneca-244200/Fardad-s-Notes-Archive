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





Container add(Container a, Container b) {
   return a + b;
}
int add(int a, int b) {
   return a + b;
}
double add(double a, double b) {
   return a + b;
}





int main() {
   Container A = 4, B = 5, C;
   double e = 4.4, f = 5.5, g;
   int i = 4, j = 5, k;
   k = add(i, j);
   cout << k << endl;
   g = add(e, f);
   cout << g << endl;
   C = add(A, B);
   cout << C << endl;
   return 0;
}
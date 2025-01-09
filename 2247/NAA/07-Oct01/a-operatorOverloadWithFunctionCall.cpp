#include <iostream>
using namespace std;
class Container {
   int m_value;
public:
   Container(int value = 0) {
      m_value = value;
   }
   // Query
   Container operator+(const Container& arg)const {
      Container retCont(m_value + arg.m_value);
      //m_value = 10; cannot since the sum is cons
      return retCont;
   }
   // Modifier
   Container& operator+=(const Container& arg) {
      m_value += arg.m_value;
      return *this;
   }
   ostream& display(ostream& ostr = cout)const {
      return ostr << m_value;
   }
};
int main() {
   Container C;
   Container C2;
   Container D(20);
   Container E(30);
   C.display() << endl;
   D.display() << endl;
   E.display() << endl;
   C = D.operator+(E);
   C.display() << endl;
   D.display() << endl;
   E.display() << endl;
   C2 = D.operator+=(E);
   C2.display() << endl;
   D.display() << endl;
   E.display() << endl;
   return 0;
}



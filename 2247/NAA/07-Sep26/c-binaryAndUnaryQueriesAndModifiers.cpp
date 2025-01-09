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
   //Query
   Container minus()const {
      Container retCont(-m_value);
      return retCont;
   }
   // Query (unary prefix operator no side effect);
   Container operator-()const {
      Container retCont(-m_value);
      return retCont;
   }
   // modifier
   Container& reduceByOne() {
      m_value--;
      return *this;
   }
   // modifier (unary prefix operator with side effect)
   Container& operator--() {
      m_value--;
      return *this;
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
   // C = D.operator+(E);
   cout << "---------------" << endl;
   C = D + E;
   C.display() << endl;
   D.display() << endl;
   E.display() << endl;
   // C2 = D.operator+=(E);
   cout << "---------------" << endl;
   C2 = D += E;
   C2.display() << endl;
   D.display() << endl;
   E.display() << endl;
   cout << "---------------" << endl;

   //C = D.minus();
   //C.display() << endl;
   //D.display() << endl;

// C = D.operator-();
   C = -D;
   C.display() << endl;
   D.display() << endl;
   cout << "---------------" << endl;

   C = E.reduceByOne();
   C.display() << endl;
   E.display() << endl;
   cout << "---------------" << endl;

   C = E.operator--();
   C.display() << endl;
   E.display() << endl;
   cout << "---------------" << endl;

   C = --E;
   C.display() << endl;
   E.display() << endl;
   cout << "---------------" << endl;




   return 0;
}



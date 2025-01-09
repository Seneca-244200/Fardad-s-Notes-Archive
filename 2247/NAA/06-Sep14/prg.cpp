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
   // Query
   Container operator-()const {
      Container retCont(-m_value);
      return retCont;
   }
   // modifier
   Container& reduceByOne() {
      m_value--;
      return *this;
   }
   Container& operator--() {
      m_value--;
      return *this;
   }
};
// helper function
Container reduceBy(const Container& left, const Container& right) {
   Container retCont(left.value() - right.value());
   return retCont;
}
// helper operator overload fucntion 
Container operator-(const Container& left, const Container& right) {
   Container retCont(left.value() - right.value());
   return retCont;
}
int main() {
   Container C;
   Container D(20);
   Container E(30);
   C.display() << endl;
   D.display() << endl;
   E.display() << endl;
   cout << "---------------" << endl;
   C = reduceBy(E, D);
   C.display() << endl;
   D.display() << endl;
   E.display() << endl;
   cout << "---------------" << endl;
   C = operator-(E, D);
   C.display() << endl;
   D.display() << endl;
   E.display() << endl;
   cout << "---------------" << endl;
   C = E - D; // calls the non-member helper operator- function overload
   C.display() << endl;
   D.display() << endl;
   E.display() << endl;
   cout << "---------------" << endl;

   return 0;
}



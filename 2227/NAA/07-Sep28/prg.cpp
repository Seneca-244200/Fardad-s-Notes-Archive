
#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
class Num {
   int m_value;
public:
   Num(int value = 0) {
      m_value = value;
//      cout << "Creating num with " << (m_value) << endl;;
   }
   Num& operator=(int value) {
      m_value = value;
      return *this;
   }
   Num& operator+=(int value) {
      m_value += value;
      return *this;
   }
   Num operator-(const Num& right)const {
      Num ret = *this;
      return ret += -right.value();
   }
   int value()const {
      return m_value;
   }
   ostream& display(ostream& coutRef = cout)const {
      coutRef << m_value;
      return coutRef;
   }
   ~Num() {
      //cout << "Removing " << m_value << endl;
   }
};
// Yuck don't do this
Num operator+(const Num& left, const Num& right) {
   Num sum(left.value() + right.value());
   return sum;
}
int main() {
   Num n;
   Num m = 5;
   Num s;
//   n.operator=(10);
   n = 10;
   n.display() << endl;
//   n.operator+=(20);
   n += 20;
   n.display() << endl;
//   s = operator+(n, m);
   s = n + m;
   s.display() << endl;
   s = n - m;
   //s = n.operator-(m);
   s.display() << endl;


   return 0;
}
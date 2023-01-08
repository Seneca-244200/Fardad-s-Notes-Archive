#include <iostream>
using namespace std;
class Num {
   int m_value;
public:
   int value()const {
      return m_value;
   }
   Num(int value = 0) {
      m_value = value;
   }
   void operator=(int value) {
      m_value = value;
   }
   void operator+=(int value) {
      m_value += value;
   }
   ostream& display(void)const {
      return cout << m_value;
   }
};
Num operator+(const Num& left, const Num& right) {
   Num sum;
   sum.operator=(left.value() + right.value());
   return sum;
}
int main() {
   Num N = 10;
   Num M = 1000;
   Num S;
   N.display() << endl;
   N.operator=(1000);
   N.display() << endl;
   N.operator+=(300);
   N.display() << endl;
   S = operator+(N, M);
   S.display() << endl;;
   return 0;
}
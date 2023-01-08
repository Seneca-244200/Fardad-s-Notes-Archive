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
   void set(int value) {
      m_value = value;
   }
   void add(int value) {
      m_value += value;
   }
   ostream& display(void)const {
      return cout << m_value;
   }
};
Num add(const Num& left, const Num& right) {
   Num sum;
   sum.set(left.value() + right.value());
   return sum;
}
int main() {
   Num N = 10;
   Num M = 1000;
   Num S;
   N.display() << endl;
   N.set(1000);
   N.display() << endl;
   N.add(300);
   N.display() << endl;
   S = add(N, M);
   S.display() << endl;;
   return 0;
}
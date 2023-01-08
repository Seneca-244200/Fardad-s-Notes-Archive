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
   Num& operator=(int value) {
      m_value = value;
      return *this;
   }
   Num& operator+=(int value) {
      m_value += value;
      return *this;
   }
   ostream& display(void)const {
      return cout << m_value;
   }
   Num operator-(const Num& right)const {
      // *this is left
      Num min(m_value - right.m_value);
      return min;
   }
};
// helper operator should be done only if you have no choice
Num operator+(const Num& left, const Num& right) {
   Num sum;
   sum.operator=(left.value() + right.value());
   return sum;
}
ostream& operator <<(ostream& left, const Num& right) {
   right.display();
   return left;
}

int main() {
   Num N = 10;
   Num M = 1000;
   Num S;
   cout << N << endl;
   S = N = 1000;
   cout << N << endl;
   cout << S << endl;
   S = N += 300;
   cout << N << endl;
   cout << S << endl;
   S = N + M;
   cout << S << endl;
   S = N - M;
   cout << S << endl;
   return 0;
}
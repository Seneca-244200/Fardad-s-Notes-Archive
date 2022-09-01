#include <iostream>
using namespace std;
class Number {
   int m_value{};
public:
   Number(int value = 0) {
      m_value = value;
   }
/*
   Number& operator++(int) {  // postfix
      m_value++;
      return *this;
   }
*/
   Number operator++(int) {  // postfix
      Number before = *this;
      m_value++;
      return before;
   }

  
  Number& operator++() {   // prefix
      m_value++;
      return *this;
   }
   ostream& print(ostream& ostr = cout)const {
      return ostr << m_value;
   }
};
ostream& operator<<(ostream& ostr, const Number& N) {
   return N.print(ostr);
}

int main() {
   Number N = 10, M;
   cout << N << endl;
   M = ++N;
   cout << "N: " << N << endl;
   cout << "M: " << M << endl;
   M = N++; 
   cout << "N: " << N << endl;
   cout << "M: " << M << endl;
   return 0;
}
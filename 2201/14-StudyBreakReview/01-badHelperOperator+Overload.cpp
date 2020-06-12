#include <iostream>
using namespace std;


class Number {
   int m_data;//               m_data = 123;  // first
public:
   Number(int data = 0) :m_data(data){   }
   void set(int data) {
      m_data = data;
   }
   ostream& display(ostream& os = cout) {
      os << m_data;
      return os;
   }
   friend Number operator+(const Number& leftOper, const Number& rightOper);
};
// non-memeber (helper function)operator overload
Number operator+(const Number& leftOper,const Number& rightOper) {
   Number retNum(leftOper.m_data + rightOper.m_data);
   return retNum;
}
int main() {
   /*int a;
   int b;
   int c;*/
   Number A;
   Number B;
   Number C;
   //a = 10;
   A.set(10);
  // b = 20;
   B.set(20);
  // c = a + b;
   C = B + A;
   C.display();
   //C = operator+(B, A);
   C = B / A;
   return 0;
}
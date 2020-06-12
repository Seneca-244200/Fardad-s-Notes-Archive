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
   Number operator+(const Number& rightOper)const {
      // *this becomes the left operand
      Number result((*this).m_data + rightOper.m_data);
      return result;
   }
//   Number operator+=(Number Roper) {
   Number& operator+=(const Number& Roper) {
      m_data += Roper.m_data;
      return *this;
   }
};
int main() {
   Number A;
   Number B;
   Number C;

   A.set(10);

   B.set(20);

   C = B += A;
  // C = B.operator+=(A);
   B.display() << endl;
   C.display() << endl;
   A = B + C;
  // A = B.operator+(C);
   return 0;
}
#include <iostream>
using namespace std;


class Number {
   int m_data;//               m_data = 123;  // first
   double m_data2;
public:
   Number(int data = 0) :m_data(data){ 
   }
   void set(int data) {
      m_data = data;
   }
   ostream& display(ostream& os = cout)const {
      os << m_data;
      return os;
   }
   Number operator+(const Number& rightOper)const {
      // *this becomes the left operand
      Number result((*this).m_data + rightOper.m_data);
      return result;
   }
   Number& operator=(int value) {
      m_data = value;
      return *this;
   }
//   Number operator+=(Number Roper) {
   Number& operator+=(const Number& Roper) {
      m_data += Roper.m_data;
      return *this;
   }
   ~Number() {
      cout << "Number(" << m_data << ") died!" << endl;
   }
};
ostream& operator<<(ostream& leftOper, const Number& rightOper) {
   // display rightOperand
   rightOper.display(leftOper);
   return leftOper;
}

int main() {
   Number A;
   Number B;
   Number C;
   cout << "assigning A and B to 10  and 20" << endl;
   A = 10;

   B = 20;

   cout << "+= operator" << endl;
   C = B += A;
  // B.display() << endl;
   cout << B << endl;
   //C.display() << endl;
   cout << C << endl;
   cout << "+ operator" << endl;
   C = B + A;
   // C = tempNamelessOpeject(result);
   cout << B << endl;
   cout << C << endl;

   return 0;
}
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
   Number& operator+=(const Number& Roper) {
      m_data += Roper.m_data;
      return *this;
   }
   Number& operator++() {
      m_data++;
      return *this;
   }

   Number operator++(int) {// int does not mean anything but postfix
      Number before = *this;
      m_data++;
      return before;
   }
   ~Number() {
      //cout << "Number(" << m_data << ") died!" << endl;
   }
};
ostream& operator<<(ostream& leftOper, const Number& rightOper) {
   // display rightOperand
   rightOper.display(leftOper);
   return leftOper;
}
ostream& operator~(const Number& N) {
   return N.display();
}
int main() {
   Number A;
   Number B;
   A = 55;
   ~A << endl;
   B = ++A;
   ~A << endl;
   ~B << endl;
   B = A++;
   ~A << endl;
   ~B << endl;
   return 0;
}
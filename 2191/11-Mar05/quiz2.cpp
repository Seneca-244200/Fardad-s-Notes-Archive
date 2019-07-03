#include <iostream>
using namespace std;
class Mark {
  int m_mark;
public:
  Mark(int v = -1);
  // M += 10;
  void operator+=(int value);
  Mark operator+(const Mark& RightOperand)const; // *this is left operand
 // friend Mark operator+(Mark LeftOper, Mark RightOper); bad way

  Mark operator++(int); // postfix
  Mark& operator++();  // prefix
//  friend ostream& operator<<(ostream& os, const Mark& M);
  ostream& display(ostream& os = std::cout)const;
};
void Mark::operator+=(int value) {
  m_mark += value;
}
Mark Mark::operator+(const Mark& RightOperand) const{
  Mark temp(m_mark + RightOperand.m_mark);// temp.m_mark = m_mark + RightOperands.m_mark;
  return temp;
}
/* good one
Mark Mark::operator+(Mark Roperand) {
  return Mark(m_mark + Roperand.m_mark);
} */
/* bad way
Mark operator+(Mark LeftOper, Mark RightOper) {
  return Mark(LeftOper.m_mark + RightOper.m_mark);
}
*/
Mark Mark::operator++(int) {
  Mark prev = *this;
  m_mark++;
  return prev;
}
Mark& Mark::operator++() {
  m_mark++;
  return *this;
}
ostream& Mark::display(ostream& os)const {
  return os << m_mark;
}
ostream& operator<<(ostream& os,const Mark& M) {
  return M.display(os);
}
int main(void) {
  Mark M = 75, N = 10, L, K = 4;
  M += 10;    // 1- adds 10 to m_mark (m_mark will become 85)
  L = M + N;  // 2- adds M and N into L, L will hold 95 in m_mark after this
  L = M++;        // 3- adds 1 to mark after
  L = ++M;        // 3- adds 1 to mark
  cout << M; // 4- prints m_mark that is 86 here
  
  L = M + N + K;


  return 0;
}

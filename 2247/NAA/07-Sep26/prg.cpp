#include <iostream>
using namespace std;
class Mark {
   int m_markValue;
public:
   Mark(int value = 0) {
      if (value < 0) {
         m_markValue = 0;
      }
      else if (value > 100) {
         m_markValue = 100;
      }
      else {
         m_markValue = value;
      }
   }
   Mark& add(int value) {
      m_markValue += value;
      if (m_markValue > 100) m_markValue = 100;
      if (m_markValue < 0) m_markValue = 0;
      return *this;
   }
   ostream& display(ostream& ostr = cout)const {
      return ostr << m_markValue;
   }
   istream& read(istream& istr = cin) {
      return istr >> m_markValue;
   }
};

Mark& operator+=(Mark& mark, int value) {
   mark.add(value);
   return mark;
}

ostream& operator<<(ostream& leftOperand, const Mark& rightOperand) {
   return rightOperand.display(leftOperand);
}

istream& operator>>(istream& leftOper, Mark& rightOper) {
   return rightOper.read(leftOper);
}

int main() {
   Mark workshops;
   cout << "What is the current mark?\n> ";
   cin >> workshops;
   cout << "Your entered " << workshops << " that is your mark" << endl;



   return 0;
}
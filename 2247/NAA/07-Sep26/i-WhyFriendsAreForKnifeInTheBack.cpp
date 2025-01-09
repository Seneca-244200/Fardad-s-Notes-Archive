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
   //friend Mark& operator+=(Mark& mark, int value);
   ostream& display(ostream& ostr = cout) {
      return ostr << m_markValue;
   }
};
/* instead of friend use the modifier method add
Mark& operator+=(Mark& mark, int value) {
   mark.m_markValue += value;
   return mark;
}
*/
Mark& operator+=(Mark& mark, int value) {
   mark.add(value);
   return mark;
}

int main() {
   Mark workshops;

   workshops += 10;
   workshops.display() << endl;
   workshops += 200;

   return 0;
}
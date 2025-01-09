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
   Mark& operator+=(int value) {
      m_markValue += value;
      if (m_markValue > 100) m_markValue = 100;
      if (m_markValue < 0) m_markValue = 0;
      return *this;
   }
};
int main() {
   Mark workshops;

   workshops += 10;

   return 0;
}
#include <iostream>
using namespace std;
class Cup {
   unsigned int m_capacity;
   unsigned int m_volume;
   Cup& set(unsigned int volume) {
      if (volume <= m_capacity) {
         m_volume = volume;
      }
      else {
         setInvalid();
      }
      return *this;
   }
   bool isInvalid()const {
      return m_capacity == 0;
   }
public:
   Cup& setInvalid() {
      m_capacity = 0;
      return *this;
   }
   Cup(unsigned int capacity = 250u) {
      m_capacity = capacity;
      m_volume = 0;
   }
   Cup& add(unsigned int volume) {
      set(volume + m_volume);
      return *this;
   }
   Cup& operator+=(unsigned int volume) {
      set(volume + m_volume);
      return *this;
   }
   Cup operator+(const Cup& ROp)const {
      Cup res(m_capacity + ROp.m_capacity);
      res += (m_volume + ROp.m_volume);
      return res;
   }
   Cup operator+(unsigned int volume)const {
      Cup res(m_capacity);
      res += (volume);
      return res;
   }
   Cup& operator=(const Cup& ROp) {
      set(ROp.m_volume);
      return *this;
   }
   ostream& display(ostream& ostr = cout) {
      if (!isInvalid()) {
         ostr << m_volume << "/" << m_capacity;
      }
      else {
         ostr << "Invlid Cup Object!";
      }
      return ostr;
   }
};
int main() {
   Cup c1, c2, c3, c4(400);
   c1.display(cout << "c1: ") << endl;
   c2.display(cout << "c2: ") << endl;
   c3.display(cout << "c3: ") << endl;
   c1 += 100;
   c1.display(cout << "c1: ") << endl;
   c2 += 50 ;
   c2.display(cout << "c2: ") << endl;
//   c3.operator=(c2.operator+(c1));
   c3 = c2 + c1;
   c3.display(cout << "c3: ") << endl;
   c4 = c3 + 200;
   c4.display(cout << "c4: ") << endl;
   return 0;
}
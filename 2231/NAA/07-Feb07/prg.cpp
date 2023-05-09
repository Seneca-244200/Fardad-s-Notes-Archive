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
      if (ROp.isInvalid()) {
         setInvalid();
      }
      else {
         set(ROp.m_volume);
      }
      return *this;
   }

   bool operator!()const {
      return isInvalid();
   }
   Cup& operator++() {
      set(m_volume + 1);
      return *this;
   }
   // int only mean postfix and is not an argument
   Cup operator++(int) {
      Cup old = *this; // fake (postfix effect) it by returning a copy of the old object
      set(m_volume + 1);
      return old;
   }
   ostream& display(ostream& ostr = cout)const {
      if (!isInvalid()) {
         ostr << m_volume << "/" << m_capacity;
      }
      else {
         ostr << "Invlid Cup Object!";
      }
      return ostr;
   }
};
// helper non-member operator overload
ostream& operator<<(ostream & ostr, const Cup & ROp) {
   return ROp.display(ostr);
}

int main() {
   Cup coffee, C;
   coffee += 100;
   cout << coffee << endl;
//   C = 100 + coffee;
   return 0;
}
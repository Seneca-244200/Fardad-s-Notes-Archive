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
   Cup coffee;
   coffee.display() << endl;
   coffee.add(100);
   coffee.display() << endl;
   coffee.operator+=(50);
   coffee.display() << endl;
   coffee += 75;
   coffee.display() << endl;
   return 0;
}
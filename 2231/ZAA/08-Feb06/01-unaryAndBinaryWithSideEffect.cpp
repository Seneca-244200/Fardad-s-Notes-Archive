#include <iostream>
using namespace std;
class Container {
   int m_capacity;
   int m_volume;
public:
   Container& set(int volume, int capacity) {
      if (volume > capacity) {
         m_volume = -1;
      }
      else {
         m_volume = volume;
      }
      m_capacity = capacity;
      return *this;
   }
   Container& set(int volume) {
      if (volume > m_capacity) {
         m_volume = -1;
      }
      else {
         m_volume = volume;
      }
      return *this;
   }
   Container(int volume, int capacity = 250) {
      set(volume, capacity);
   }
   bool isEmpty()const {
      return m_volume < 0;
   }
   ostream& display(ostream& os = cout)const {
      if (!isEmpty()) {
         os << "C: " << m_volume << "/" << m_capacity;
      }
      return os;
   }
   Container& add(int volume) {
      set(volume + m_volume);
      return *this;
   }
   Container& operator+=(int volume) {
      set(volume + m_volume);
      return *this;
   }
   void operator++() {
      set(m_volume + 1);
   }
};

int main() {
   Container C(200, 1000);
   C.display() << endl;
   C.add(75);
   C.display() << endl;
   C.operator+=(50);
   C.display() << endl;
   C += 100;
   C.display() << endl;
   ++C;
   C.display() << endl;
}

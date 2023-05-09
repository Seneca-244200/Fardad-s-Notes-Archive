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
   bool isInvalid()const {
      return m_volume < 0;
   }
   ostream& display(ostream& os = cout)const {
      if (!isInvalid()) {
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
   Container& operator++() {
      set(m_volume + 1);
      return *this;
   }
   //   R = C + D;
   //   R = C.opeator+(D);
   Container operator+(const Container& ROper)const {
      Container res(m_volume + ROper.m_volume,
         m_capacity + ROper.m_capacity);
      return res;
   }
   // R = res;
   // R.operator=(res)
   Container& operator=(const Container& Roper) {
      set(Roper.m_volume);
      return *this;
   }
   // !R
   // bool R.operator()
   bool operator!()const {
      return m_volume == 0;
   }
};

int main() {
   Container C(200, 1000);
   Container D(100, 200);
   Container R(0, 1500);
   C.display() << endl;
   D.display() << endl;
   R.display() << endl;
   if (!R.isInvalid() && !R) {
      cout << "this container is empty!" << endl;
   }
   R = C + D;
   C.display() << endl;
   D.display() << endl;
   R.display() << endl;
   return 0;
}
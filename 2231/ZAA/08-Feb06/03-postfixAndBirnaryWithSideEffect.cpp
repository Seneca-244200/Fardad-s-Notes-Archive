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
         os <<  m_volume << "/" << m_capacity;
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
   // prefix ++
   Container& operator++() {
      set(m_volume + 1);
      return *this;
   }
   // postfix has an int as argument
   Container operator++(int) {
      Container old(m_volume, m_capacity);
      set(m_volume + 1);
      return old;
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
   // pouring one container into another
   //  R << C;
   //  R.operator<<(C)
   Container& operator<<(Container& Roper) {
      set(Roper.m_volume + m_volume);
      Roper.set(0);
      return *this;
   }
};

int main() {
   Container R(100, 700);
   Container C(200, 1000);
   C.display() << endl;
   (++C).display() << endl;
   (++C).add(50);
   C.display() << endl;
   C++.add(50);// it will be added to temp object that is about to die
   C.display() << endl;
   R << C;
   C.display(cout << "C,cont:") << endl;
   R.display(cout << "R,cont:") << endl;
   return 0;
}
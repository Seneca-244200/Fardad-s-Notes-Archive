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
   Container& operator+=(int volume) {   // Container C, result ;  result  <<<---  C += 10;
      set(volume + m_volume);
      return *this;
   }
   // prefix ++
   Container& operator++() {   // Container C, result;       result  <<<<----  ++C;
      set(m_volume + 1);
      return *this;
   }
   // postfix has an int as argument, the int is just a flag for postfix and not an argument
   Container operator++(int) {  // Container C, result;       result  <<<<----  C++;
      Container old(m_volume, m_capacity);
      set(m_volume + 1);
      return old;
   }
   //   R = C + D;
   //   R = C.opeator+(D);
   Container operator+(const Container& ROper)const {// Container A, B, result; result <<<< A + B
      Container res(m_volume + ROper.m_volume,
         m_capacity + ROper.m_capacity);
      return res;
   }
   // R = res;
   // R.operator=(res)
   Container& operator=(const Container& Roper) {   // Container Result, A ,B;   result <<<  A = B;
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
ostream& operator<<(ostream& Lo, const Container& Ro) {  // Container C;    cout << C << endl;
   return Ro.display(Lo);
}
int main() {
   Container R(100, 700);
   Container C(200, 1000);
   cout <<"The containr is " << R << " and whatever" << endl;
   return 0;
}
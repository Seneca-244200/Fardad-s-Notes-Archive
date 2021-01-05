#include <iostream>
using namespace std;
class Container {
   int m_value;
   int m_noOfDisplays = 0;
public:
   Container(int value = 0) {
      m_value = value;
      cout << "Creating Cont " << m_value << endl;
   }
   ~Container() {
      cout << "cont " << m_value << " is gone" << endl;
   }
   int NoOfDisplayCalls()const {
      return m_noOfDisplays;
   }
   ostream& display(ostream& os)const {
      int* nod = const_cast<int*>(&m_noOfDisplays);
      (*nod)++;
      return os << "C.value: " << value();
   }
   int value()const {
      return m_value;
   }
   void value(int thevalue) {
      m_value = thevalue;
   }
   Container operator+(const Container& C)const {
      return Container(m_value + C.m_value);
   }
};
ostream& operator<<(ostream& ostr, const Container& C) {
   return C.display(ostr);
}
int main() {
   int a = 24, d = 34;;
   double b = 1.23, c;

   c = a + b;
   c = a + d;
   return 0;
}
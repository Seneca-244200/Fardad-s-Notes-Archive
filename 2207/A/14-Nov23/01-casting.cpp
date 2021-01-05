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
   int a = 24;
   double b;
   Container C;
   b = (double)a; // cast notation
   b = double(a); // constructor notation
   b = a;
   // same = same;
   C = a;
   cout << "right after assignment" << endl;
   cout << C << endl;
   cout << C << endl;
   cout << C << endl;
   cout << C << endl;
   cout << C << endl;
   cout << "No of displays: " << C.NoOfDisplayCalls() << endl;
   return 0;
}
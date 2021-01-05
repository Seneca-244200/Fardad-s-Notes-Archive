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
   int noOfDisplayCalls()const {
      return m_noOfDisplays;
   }
   ostream& display(ostream& os)const {
 //     int* nod = const_cast<int*>(&m_noOfDisplays);
 //     (*nod)++;
      int& nod = const_cast<int&>(m_noOfDisplays);
      nod++;
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
   int a = 24, c;
   double b = 1.234;
   Container C;
   double* p;
   b = a;
   b = (double)a; // C notation, casting notation
   b = double(a); // C++ notation, one argument constructor notation
   b = static_cast<double>(a);// C++ notation, Constrained Cast
   // p = static_cast<double*>(a);
   p = reinterpret_cast<double*>(a);
   b += .5;
   cout << b << endl;
   C = a;
   cout << C << endl;
   cout << C << endl;
   cout << C << endl;
   cout << C << endl;
   cout << C << endl;
   cout << C << endl;
   cout << "C was displayed " << C.noOfDisplayCalls() << " times!" <<  endl;
   return 0;
}
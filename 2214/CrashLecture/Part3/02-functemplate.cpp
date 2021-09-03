#include <iostream>
#include "sum.h"
using namespace std;
using namespace sdds;
class Container {
   int m_data;
public:
   Container(int data = 0) :m_data(data) {
   }
   ostream& display(ostream& os)const {
      return os << "C volume: " <<  m_data ;
   }
   Container& operator=(int value) {
      m_data = value;
      return *this;
   }
   Container operator+(const Container& R)const {
      return Container(m_data + R.m_data);
   }
};
ostream& operator<<(ostream& os, const Container& C) {
   return C.display(os);
}



//int sum(int a, int b) {
//   return a + b;
//}
//
//double sum(double a, double b) {
//   return a + b;
//}
//
//Container sum(Container a, Container b) {
//   return a + b;
//}


int main() {
   int a = 10, b = 20, c;
   double x = 1.1, y = 2.2, z;
   Container R, C(20), D = 50;
   c = sum(a, b);
   z = sum(x, y);
   R = sum(C, D);
   cout << c << endl;
   cout << z << endl;
   cout << R << endl;
   cout << "bye bye!" << endl;
   return 0;
}











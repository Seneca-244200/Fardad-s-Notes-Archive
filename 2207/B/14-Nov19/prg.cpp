#include <iostream>
using namespace std;
#include "Array.h"
class Container {
   int m_value;
public:
   Container(int value = 0) {
      m_value = value;
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
   return ostr << "C.value: " << C.value();
}

int main() {
   int i;
   Array<Container> C(4);
   Array<int> I(5);
   for (i = 0; i < 7; i++) {
      I[i] = i * 10;
   }
   for (i = 0; i < I.size(); i++) {
      cout << I[i] << " ";
   }
   cout << endl;
   for (i = 0; i < 7; i++) {
       C[i] = i * 10;
      //C[i].value(i * 10);
   }
   for (i = 0; i < C.size(); i++) {
      cout << C[i] << " ";
   }
   cout << endl;

   return 0;
}
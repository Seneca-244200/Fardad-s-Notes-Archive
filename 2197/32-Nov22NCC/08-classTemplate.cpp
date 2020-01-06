#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <iomanip>
#include "sort.h"
using namespace std;

template <typename T>
class Container {
   T m_value;
public:
   Container(){}
   Container(T value) {
      m_value = value;
   }
   T value()const {
      return m_value;
   }
   void value(T thevalue) {
      m_value = thevalue;
   }
   T operator+(const Container<T>& C)const {
      return Container<T>(m_value + C.m_value);
   }
   virtual ~Container() {}
};

template <typename T>
ostream& operator<<(ostream& ostr, const Container<T>& C) {
   return ostr << "C.value: " << C.value();
}

int main() {
   Container<double> X;
   X.value(1.4);
   Container<int> Y;
   Y.value(20);
   cout << X << " " << Y << endl;
   return 0;
}
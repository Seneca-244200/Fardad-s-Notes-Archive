#include <iostream>
using namespace std;

class Mark {
   int m_value;
public:
   Mark(int data = 0) :m_value(data) {
   }
   ostream& display(ostream& os)const {
      return os << "M" << m_value;
   }
   Mark operator+(const Mark& R)const {
      return Mark(m_value + R.m_value);
   }
   Mark& operator=(int value) {
      m_value = value;
      return *this;
   }
};
ostream& operator<<(ostream& os, const Mark& C) {
   return C.display(os);
}


class Container {
   double m_data;
public:
   Container(double data = 0.0) :m_data(data) {
   }
   ostream& display(ostream& os)const {
      return os << "C" << m_data;
   }
   Container operator+(const Container& R)const {
      return Container(m_data + R.m_data);
   }
   Container& operator=(double data) {
      m_data = data;
      return *this;
   }
};
ostream& operator<<(ostream& os, const Container& C) {
   return C.display(os);
}

template <typename ArrayType, typename valueType>
void setArrayValues(ArrayType* m, valueType value, int size) {
   for (int i = 0; i < size; i++) {
      m[i] = value;
   }
}


template <typename type>
void displayArray(const type* m, int size) {
   for (int i = 0; i < size; i++) {
      cout << m[i] <<  " ";
   }
   cout << endl;
}


int main() {
   Mark M[5];
   Container C[10];
   float F[20];
   setArrayValues(M, 80, 5);
   setArrayValues(C, 123.45, 10);
   setArrayValues(F, 80.12, 20);
   displayArray(M, 5);
   displayArray(C, 10);
   displayArray(F, 20);
   return 0;
}

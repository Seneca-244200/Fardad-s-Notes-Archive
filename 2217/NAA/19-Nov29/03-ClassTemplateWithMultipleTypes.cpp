#include <iostream>
using namespace std;

template <typename type, char sign>
class Container {
   type m_data{};
public:
   Container() {
   }
   Container(double data) {
   }
   ostream& display(ostream& os)const {
      return os << sign << m_data;
   }
   Container<type,sign> operator+(const Container<type, sign>& R)const {
      return Container(m_data + R.m_data);
   }
   Container<type, sign>& operator=(double data) {
      m_data = data;
      return *this;
   }
};
template <typename type, char sign>
ostream& operator<<(ostream& os, const Container<type, sign>& C) {
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
   Container<int,'M'> M[5];
   Container<double, 'C'> C[10];
   float F[20];
   setArrayValues(M, 80, 5);
   setArrayValues(C, 123.45, 10);
   setArrayValues(F, 80.12, 20);
   displayArray(M, 5);
   displayArray(C, 10);
   displayArray(F, 20);
   return 0;
}

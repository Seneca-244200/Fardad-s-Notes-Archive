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
template <typename type, typename valType>
void setArrayValue(type* m, valType value, int size) {
   for (int i = 0; i < size; i++) {
      m[i] = value;
   }
}
template <typename type, typename valType>
void setArrayValues(type* m, valType* value, int size) {
   for (int i = 0; i < size; i++) {
      m[i] = value[i];
   }
}

template <typename type>
void displayArray(const type* m, int size) {
   for (int i = 0; i < size; i++) {
      cout << m[i] << " ";
   }
   cout << endl;
}

int main() {
   int marks[] = { 10,30, 50, 80, 100 };
   double vals[] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9, 10.1 };
   Mark M[5];
   Container C[10];
   char ch[20];
   setArrayValue(M, 85, 5);
   displayArray(M, 5);
   setArrayValues(M, marks, 5);
   displayArray(M, 5);

   setArrayValue(C, 123.456, 10);
   displayArray(C, 10);
   setArrayValues(C, vals, 10);
   displayArray(C, 10);
   setArrayValue(ch, 'A', 20);
   displayArray(ch, 20);

   return 0;
}
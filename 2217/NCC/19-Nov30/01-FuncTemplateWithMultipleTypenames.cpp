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

template <typename type, typename valueType>
void setElementsValue(type* arr, valueType value, int size) {
   for (int i = 0; i < size; i++) {
      arr[i] = value;
   }
}

template <typename type, typename valueType>
void setElementsValues(type* arr,const valueType* values, int size) {
   for (int i = 0; i < size; i++) {
      arr[i] = values[i];
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
   char chars[20];
   setElementsValue(M, 85, 5);
   displayArray(M, 5); 
   setElementsValue(C, 12.45, 10);
   displayArray(C, 10);
   setElementsValue(chars, 'A', 20);
   displayArray(chars, 20);

   setElementsValues(M, marks, 5);
   displayArray(M, 5);
   setElementsValues(C, vals, 10);
   displayArray(C, 10);

   return 0;
}
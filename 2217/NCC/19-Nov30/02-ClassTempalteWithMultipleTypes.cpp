#include <iostream>
using namespace std;
template <typename type, char sign>
class Container {
   type m_data{};
public:
   Container(){ }
   Container(type data) :m_data(data) {
   }
   ostream& display(ostream& os)const {
      return os << sign << m_data;
   }
   Container<type,sign> operator+(const Container<type, sign>& R)const {
      return Container<type, sign>(m_data + R.m_data);
   }
   Container<type, sign>& operator=(type data) {
      m_data = data;
      return *this;
   }
};


template <typename type, char sign>
ostream& operator<<(ostream& os, const Container<type, sign>& C) {
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
   Container<int,'M'> M[5];
   Container<double, 'C'> C[10];
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
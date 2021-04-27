
#include <iostream>
#include "bblsort.h"
using namespace std;
class Container {
   int m_data;
public:
   Container(int data =0 ) :m_data(data) {
   }
   ostream& display(ostream& os)const {
      return os << m_data;
   }
   Container& operator=(int value) {
      m_data = value;
      return *this;
   }
   bool operator>(const Container& C)const {
      return m_data > C.m_data;
   }
   Container operator+(const Container& R)const {
      return Container(m_data + R.m_data);
   }
};
ostream& operator<<(ostream& os, const Container& C) {
   return C.display(os);
}






// type must support ostream instertion <<  operator with cascade
template <typename T>
void prnArray(T a[], int n, const char* title) {
   cout << title << endl;
   for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
   }
   cout << endl;
}



int main() {
   Container C[]{ 2,5,4,7,4,6,5,2,9 };
   int intArray[]{ 2,5,4,7,4,6,5,2,9 };
   double dblArray[]{2.3,4.6,1.1,6.4,2.6,8.8};
   sort(intArray, 9);
   prnArray(intArray, 9, "Int Array");
   sort(dblArray, 6);
   prnArray(dblArray, 6, "Double Array");
   sort(C, 9);
   prnArray(C, 9, "Container Array");
   return 0;
}
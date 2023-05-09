#include <iostream>
#include "Utils.h"
#include "IntArray.h"
using namespace std;
using namespace sdds;
class Container {
   int m_data;
public:
   Container(int data = 0) :m_data(data) {
   }
   int data()const {
      return m_data;
   }
   ostream& display(ostream& os)const {
      return os << "Cn: " << m_data;
   }
};
ostream& operator<<(ostream& os, const Container& C) {
   return C.display(os);
}

class Mark {
   int m_data;
public:
   Mark(int data = 0) : m_data{ data } {
   }
   Mark operator+(const Mark& Ro)const {
      return Mark((m_data + Ro.m_data > 100) ? 100 : m_data + Ro.m_data);
   }
   ostream& display(ostream& os)const {
      return os << "Mk: " << m_data;
   }
};
ostream& operator<<(ostream& os, const Mark& c) {
   return c.display(os);
}

/// <summary>
/// returns the sum
/// </summary>
/// <typeparam name="type">Must supprot Copying and operator+</typeparam>
/// <param name="a">a type object</param>
/// <param name="b">a type object</param>
/// <returns>the sum of two using operator+</returns>
template <typename type>
type sum(type a, type b) {
   return a + b;
}

template <>
Container sum<Container>(Container A, Container B) {
   return Container(A.data() + B.data());
}

void prnArray(const IntArray& I) {
   for(int i = 0; i < I.size(); i++) {
      cout << I[i];
      if(i != I.size() - 1) cout << ", ";
   }
   cout << endl;
}

int main() {
   int ar[6] = { 1, 2, 3 , 4 , 5, 6};
   IntArray A(5);
   A[10] = 32;
   cout << A.size() << endl;
   prnArray(A);
   A.set(ar, 6);
   prnArray(A);
   return 0;
}
#include <iostream>
#include "Utils.h"
#include "DynArray.h"
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

template <typename type>
void prnArray(const DynArray<type>& I) {
   for(int i = 0; i < I.size(); i++) {
      cout << I[i];
      if(i != I.size() - 1) cout << ", ";
   }
   cout << endl;
}

int main() {
   DynArray<int> A(5);
   DynArray<double> D(5);
   DynArray<Mark> M(5);
   Mark ma[5] = { 50, 60, 70, 80 , 90 };
   int i;
   for(i = 0; i < 15; i++) {
      A[i] = i + 100;
   }
   cout << A.size() << endl;
   prnArray(A);

   for(i = 0; i < 10; i++) {
      D[i] = i + 100.123;
   }
   cout << D.size() << endl;
   prnArray(D);

   M = ma;
   cout << M.size() << endl;
   prnArray(M);


   return 0;
}
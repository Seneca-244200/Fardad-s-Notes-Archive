#include <iostream>
#include "Sort.h"
using namespace std;
using namespace sdds;
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
   bool operator > (const Mark& M)const {
      return m_value > M.m_value;
   }
};
ostream& operator<<(ostream& os, const Mark& C) {
   return C.display(os);
}

class Container {
   int* m_data{};
public:

   //Container(const Container& C) = delete;
   //Container& operator=(const Container& C) = delete;
   //rule of three
   Container(const Container& C) {
      operator=(C);
   }
   Container& operator=(const Container& C) {
      if (this != &C) {
         delete m_data;
         m_data = nullptr;
         if (C.m_data) {
            m_data = new int;
            *m_data = *C.m_data;
         }
      }
      return *this;
   }
   virtual ~Container() {
      delete m_data;
   }
   //  end rule of three
   Container() {
   }
   //Container(int data) {
   //   //logic 1
   //   // m_data = new int(data);  // one constructor
   //   //logic 2 
   //   m_data = new int;           // default const and copy assingment afterwards
   //   *m_data = data;
   //}
   // logic 3
   Container(int data) :m_data(new int(data)) {  // in initialization area
   }
   ostream& display(ostream& os)const {
      if (m_data)
         os << "C" <<  * m_data;
      else
         os << "C0";
      return os;
   }
   Container operator+(const Container& R)const {
      return Container((m_data ? *m_data : 0) + (R.m_data ? *R.m_data : 0));
   }
   bool operator > (const Container& R)const {
      return (m_data ? *m_data : 0) > (R.m_data ? *R.m_data : 0);
   }

};
ostream& operator<<(ostream& os, const Container& C) {
   return C.display(os);
}


/*
86, 87: Rule of three
87: type = type + type
*/
template <typename ChangeMe>
ChangeMe sum(ChangeMe x, ChangeMe y) {
   return x + y;
}


/*
* 98: Type should work with insertion oprator and ostream
*/

template <typename type>
void listCsvArray(type* array, int size, ostream& ostr=cout) {
   for (int i = 0; i < size; i++) {
      ostr << array[i];
      if(i != size - 1) ostr << ", ";
   }
   ostr << endl;
}


int main() {
   double dvals[]{ 2.1,5.2,3.3,7.4,8.5,3.6,4.7,5.8 };
   int ivals[]{ 2,5,3,7,8,3,4,5,9,1 };
   Container C[]{ 2,5,3,7,8,3,4 };
   Mark M[]{ 90,75,45,30,100,80 };

   sort(dvals, 8);
   listCsvArray(dvals, 8);
   sort(ivals, 10);
   listCsvArray(ivals, 10);
   sort(M, 6);
   listCsvArray(M, 6);
   sort(C, 7);
   listCsvArray(C, 7);


   return 0;
}